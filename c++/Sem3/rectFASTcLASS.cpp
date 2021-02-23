#include<iostream>
using namespace std;

class Rectangle{
	public:
		int l;
		int b;
};

int main()
{
	Rectangle R1, R2;
	R1.l = 10;
	R1.b = 5;
	
	R2.l = 20;
	R2.b = 10;
	
	cout << "Area of R1: " << (R1.l * R1.b) << endl;
	cout << "Area of R2: " << (R2.l * R2.b) << endl;
	return 0;
}
