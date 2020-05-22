#include <iostream>
#include "move.h"

Move::Move(double a, double b)
{
	x = a;
	y = b;
}

void Move::showmove() const
{
	using std::cout;
	using std::endl;
	cout << "Current x = " << x << ".\nCurrent y = " << y << ".\n";
}

Move Move::add(const Move & m) const
{
	double temp_x, temp_y;
	temp_x = m.x + this->x;
	temp_y = m.y + this->y;
	Move new_m(temp_x, temp_y);
	return new_m;
}

void Move::reset(double a, double b)
{
	x = a;
	y = b;
}
