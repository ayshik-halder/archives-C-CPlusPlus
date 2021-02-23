#include<iostream>
using namespace std;

class ShowData{
	public:
		void display(int i)
		{
			cout << "\nInteger number : " << i << endl;
		}
		void display(double d)
		{
			cout << "\nDouble number : " << d << endl;
		}
		void display(int i, double d)
		{
			cout << "\nInteger number : " << i;
			cout << "\n and Double number : " << d << endl;
		}
		void display(string c)
		{
			cout << "\n Charecter : " << c << endl;
		}
};

int main()
{
	ShowData p;
	
	p.display(100);
	p.display(100.55);
	p.display(100, 100.55);
	p.display("Function Overloading");
	
	return 0;
}
