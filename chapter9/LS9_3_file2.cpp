// file2.cpp -- contains functions called in file1.cpp
#include <iostream>
#include <cmath>
#include "LS9_1_coordin.h"

// covert rectangular to polar coordinates
polar rect_to_polar(rect xypos)
{
	using namespace std;
	polar answer;

	answer.distance = sqrt(xypos.x*xypos.x + xypos.y*xypos.y);
	answer.angle = atan2(xypos.y, xypos.x);
	return answer;
}

// show polar coordinates, converting angle to degrees
void show_polar(polar dapos)
{
	using namespace std;
	const double Rag_to_deg = 57.29577951;

	cout << "distance = " << dapos.distance;
	cout << ", angle = " << dapos.angle * Rag_to_deg;
	cout << " degrees.\n";
}
