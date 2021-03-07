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
				cout << "Complex number : " << real  << img << "i " << endl;
			else
				cout << "Complex number : " << real << " + " << img << "i " << endl;
				
			cout << endl;
		}
		Complex addComp(Complex C1, Complex C2)
		{
			Complex temp;
			temp.real = C1.real + C2.real;
			temp.img = C1.img + C2.img;
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
	
	C = C.addComp(C1, C2);
	cout << " Sum of the Complex Numbers: " << endl;
	C.display();
	
	return 0;
}

