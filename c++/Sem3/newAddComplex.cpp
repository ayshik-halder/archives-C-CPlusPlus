#include<iostream>
using namespace std;

class Complex{
    int real, imag;
    public:
        void getData()
        {
            cout << "Enter the Real and Imaginary part respectively : ";
            cin >> real >> imag;
            cout << endl;
        }
        void display()
		{
			if(imag < 0)
				cout << "Complex number : " << real << " - i" << imag << endl;
			else
				cout << "Complex number : " << real << " + i" << imag << endl;
		}
        Complex AddC(Complex A)
        {
            Complex B;
            B.real = this->real + A.real;
            B.imag = this->imag + A.imag;
            return B;
        }
        Complex SubC(Complex S)
        {
            Complex C;
            C.real = this->real + S.real;
            C.real = this->imag + S.imag;
            return C;
        }
        Complex MultC(Complex M)
        {
            Complex temp;
			temp.real = (this->real * M.real) - (this->imag * M.imag);
			temp.imag = (this->real * M.imag) + (this->imag * M.real);
			return temp;
        }
};

int main()
{
    Complex C1, C2, C, Cs, Cm;
    
    C1.getData();
    C1.display();

    C2.getData();
    C2.display();

    C = C1.AddC(C2);
    cout << "Sum of the Complex Numbers is : ";
    C.display();

    Cs = C1.SubC(C2);
    cout << "Difference of the Complex Numbers is : ";
    Cs.display();

    Cm = C1.MultC(C2);
    cout << "Sum of the Complex Numbers is : ";
    Cm.display();

    return 0;
}