// exercise 4 -- write a program that asks the user to enter the number of seconds as an integer value (use type long, or if avaiable, long long) and that then 
// displays the equivalent time in days, hours, minutes and seconds.
#include <iostream>
int main()
{
	using namespace std;
	long long in_sec;
	int day;
	int hour;
	int minute;
	int second;
	const int day_hour = 24;
	const int hour_min = 60;
	const int min_sec = 60;
	
	cout << "Enter the number of seconds: ";
	cin >> in_sec;
	day = in_sec / min_sec / hour_min / day_hour;
	hour = (in_sec / min_sec / hour_min) % (day * day_hour);
	minute = (in_sec / min_sec) % (day * day_hour * hour_min + 
			hour * hour_min);
	second = in_sec % (day * day_hour * hour_min * min_sec
			+ hour * hour_min * min_sec + minute * min_sec);
	cout << in_sec << " seconds = " << day << " days, "
		<< hour << " hours, " << minute << " minutes, "
		<< second << " seconds" << endl;
	return 0;
}
