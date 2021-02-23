#include<iostream>
using namespace std;

class Complex{
	int real, img;
	public:
		Complex()
		{
			cout << "**Defualt Constractor" << endl;
		}
		Complex(int a, int b)
		{
			cout << "**Parameterized Constractor Invoked" << endl;
			real = a;
			img = b;
		}
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
		}
		addComp(Complex C1, Complex C2)
		{
			real = C1.real + C2.real;
			img = C1.img + C2.img;
			
			display();
		}
};

int main()
{
	Complex C1(2, 3);
	cout << "Complex Number 1: " << endl;
	C1.display();
	
	Complex C2(4, 5);
	cout << "Complex Number 2: " << endl;
	C2.display();
	
	Complex C;	
	cout << "Sum of the Complex Numbers: " << endl;
	C.addComp(C1, C2);
	
	return 0;
}
