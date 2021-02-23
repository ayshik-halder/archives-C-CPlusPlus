#include<iostream>
using namespace std;

class Complex{
	int real, img;
	public:
		getData()
		{
			cout << "Enter the values for the real part and imaginary part: ";
			cin >> real >> img;
		}
		display()
		{
			if(img<0)
				cout << "Complex number : " << real << " - i" << img << endl;
			else
				cout << "Complex number : " << real << " + i" << img << endl;
				
			cout << endl;
		}
		
		friend Complex operator + (Complex, Complex);
		friend Complex operator - (Complex, Complex);
		friend Complex operator * (Complex, Complex);
};

	Complex operator + (Complex C1, Complex C2)
		{
			Complex temp;
			temp.real = C1.real + C2.real;
			temp.img = C1.img + C2.img;
			return temp;
		}
	Complex operator - (Complex C1, Complex C2)
		{
		Complex temp;
		temp.real = C1.real - C2.real;
		temp.img = C1.img - C2.img;
		return temp;
		}
	Complex operator * (Complex C1, Complex C2)
		{
		Complex temp;
		temp.real = (C1.real * C2.real) - (C1.img * C2.img);
		temp.img = (C1.real * C2.img) + (C1.img * C2.real);
		return temp;
		}

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
