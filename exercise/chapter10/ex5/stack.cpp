// stack.cpp -- Stack member functions
#include <iostream>

#include "stack.h"

Stack::Stack()				// create an empty stack
{
	top = 0;
}

bool Stack::isempty() const
{
	return top == 0;
}

bool Stack::isfull() const
{
	return top == MAX;
}

bool Stack::push(const customer & item)
{
	if (top < MAX)
	{
		items[top++] = item;
		return true;
	}
	else
		return false;
}

bool Stack::pop(customer & item)
{
	static double total = 0.0;
	if (top > 0)
	{
		item = items[--top];
		total += item.payment;
		std::cout << "The running total is " << total << std::endl;
		return true;
	}
	else
		return false;
}
