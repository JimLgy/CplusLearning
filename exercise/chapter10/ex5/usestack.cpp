#include "stack.h"
#include <iostream>

int main()
{
	using std::cout;
	using std::endl;
	customer c1 = {"aaa", 10.5};
	customer c2 = {"bbb", 20.5};
	customer c3 = {"ccc", 30.2};

	Stack s1;
	s1.push(c1);
	s1.push(c2);
	s1.push(c3);
	s1.pop(c3);
	s1.pop(c2);
	return 0;
}
