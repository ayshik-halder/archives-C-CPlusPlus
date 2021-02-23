#include<iostream>
using namespace std;

class Complex{
	int real, img;
	public:
		void getData()
		{
			cout << "Enter the values for the real part and imaginary part: ";
			cin >> real >> img;
		}
		void display()
		{
			if(img<0)
				cout << "Complex number : " << real << " - i" << img << endl;
			else
				cout << "Complex number : " << real << " + i" << img << endl;
		}
		Complex operator + (Complex const &obj)
		{
			Complex temp;
			temp.real = real + obj.real;
			temp.img = img + obj.img;
			return temp;
		}
};

int main()
{
	Complex C1, C2, C;
	
	C1.getData();
	cout << "Complex Number 1: " << endl;
	C1.display();
	
	C2.getData();
	cout << "Complex Number 2: " << endl;
	C2.display();
	
	C = C1 + C2;
	cout << " Sum of the Complex Numbers: " << endl;
	C.display();
	
	return 0;
}
