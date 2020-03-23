#include <iostream>
struct box
{
	char maker[40];
	float height;
	float width;
	float length;
	float volume;
};
void showbox1(const box box1);		// show box by passing value
void showbox2(const box * ptb);		// show box by passing address

int main()
{
	using namespace std;
	box box1 = 
	{
		"Amazon",
		30,
		40,
		50,
		60000
	};
	box * ptb = &box1;
	cout << "Show structure content by passing value\n";
	showbox1(box1);
	cout << "Show structure content by passing address\n";
	showbox2(ptb);
	return 0;
}

void showbox1(const box box1)
{
	using namespace std;
	cout << "Box Maker:" << box1.maker << endl;
	cout << "Height: " << box1.height << endl;
	cout << "Width: " << box1.width << endl;
	cout << "Length: " << box1.length << endl;
	cout << "Volume: " << box1.volume << endl;
}

void showbox2(const box * ptb)
{
	using namespace std;
	cout << "Box Maker:" << ptb->maker << endl;
      	cout << "Height: " << ptb->height << endl;
      	cout << "Width: " << ptb->width << endl;
     	cout << "Length: " << ptb->length << endl;
       	cout << "Volume: " << ptb->volume << endl;
}
