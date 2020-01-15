// exercise 2 -- write a short program that asks for your hieght in feet and inches and your weight in pounds. (use three variables to store the information.)
// Have teh program report your body mass index.

#include <iostream>
#include <cmath>
int main()
{
	using namespace std;
	const double h_in2m = 0.0254;
	const double m_lb2kg = 2.2;
	int hin_feet;
	int hin_inch;
	double win_lb;
	double hout;
	double wout;
	double bmi;

	cout << "Please enter your height:" << endl;
	cout << "__ feet\b\b\b\b\b\b\b"; 
	cin >> hin_feet;
	cout << "and __ inches.\b\b\b\b\b\b\b\b\b\b";
	cin >> hin_inch;
	cout << "Please enter your weight in pounds (lb): ";
	cin >> win_lb;

	hout = hin_feet * h_in2m + hin_inch;
	wout = win_lb * m_lb2kg;
	bmi = wout / sqrt(hout);
	cout << "Your BMI is " << bmi << "." << endl;
	return 0;	
}
