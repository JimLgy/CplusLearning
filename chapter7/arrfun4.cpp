// Listing 7.8 arrfun4.cpp -- functions with an array range
#include <iostream>
const int ArSize = 8;
int sum_arr(const int * begin, const int * end);
int main()
{
	int cookies[ArSize] = {1,2,4,8,16,32,64,128};
	// some systems require preceding int with static to 
	// enable array initialization
	// some systems require a type cast: unsigned (cookies)
	int sum = sum_arr(cookies, cookies + ArSize);
	std::cout << "Total cookies eaten: " << sum << std::endl;
	sum = sum_arr(cookies, cookies + 3);
	std::cout << "First three eaters ate " << sum << " cookies.\n";
	sum = sum_arr(cookies+4, cookies + 8);		// another lie
	std::cout << "Last four eaters ate " << sum << " cookies.\n";
}

// return the sume of an integer array
int sum_arr(const int * begin, const int * end)
{
	const int * pt; 
	int total = 0;

	for (pt = begin; pt != end; pt++)
		total = total + *pt;
	return total;
}
