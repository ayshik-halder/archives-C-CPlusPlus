#include<iostream>
using namespace std;

class Circle{
		float r;
	public:
		void getData()
		{
			cout << "Enter the radius of the Circle : " << endl;
			cin >> r;
		}
		void display()
		{
			cout << "The Radius of the Circle : " << r << endl;
		}
		void calAreaCum()
		{
			cout << "Area of the Circle: " << (3.14 * r * r) << endl;
			cout << "Circumference of Circle: " << (2 * 3.14 * r) << endl;
		}
};

int main()
{
	Circle C1;
	
	C1.getData();
	C1.display();
	C1.calAreaCum();
	return 0;
}

