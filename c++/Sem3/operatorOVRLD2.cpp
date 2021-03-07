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
				cout << "Complex number : " << real << " - " << img << "i" << endl;
			else
				cout << "Complex number : " << real << " + " << img << "i" << endl;
				
			cout << endl;
		}
		Complex operator + (Complex const &obj)
		{
			Complex temp;
			temp.real = real + obj.real;
			temp.img = img + obj.img;
			return temp;
		}
		Complex operator - (Complex const &obj)
		{
			Complex temp;
			temp.real = real - obj.real;
			temp.img = img - obj.img;
			return temp;
		}
		Complex operator * (Complex const &obj)
		{
			Complex temp;
			temp.real = (real * obj.real) - (img * obj.img);
			temp.img = (real * obj.img) + (img * obj.real);
			return temp;
		}
};

int main()
{
	Complex C1, C2, C, Cs, Cm;
	
	C1.getData();
	cout << "Complex Number 1: " << endl;
	C1.display();
	
	C2.getData();
	cout << "Complex Number 2: " << endl;
	C2.display();
	
	C = C1 + C2;
	cout << " Sum of the Complex Numbers: " << endl;
	C.display();
	
	Cs = C1 - C2;
	cout << " Diffirence of the Complex Numbers: " << endl;
	Cs.display();
	
	Cm = C1 * C2;
	cout << " Multiplication of the Complex Numbers: " << endl;
	Cm.display();
	
	return 0;
}



