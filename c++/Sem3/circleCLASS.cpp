#include<iostream>
using namespace std;

class Circle{
	public:
		float r;
};

int main()
{
	Circle C1;
	cout << "Enter the radius of the Circle : " << endl;
	cin >> C1.r;
	cout << "Area of the Circle: " << (3.14 * C1.r * C1.r) << endl;
	cout << "Circumference of Circle: " << (2 * 3.14 * C1.r) << endl;
	return 0;
}
