#include<iostream>
using namespace std;

class NewSum{
	public:
		void Sum(int a, int b)
		{
			cout << "\nThe sum of the integers : " << a + b << endl;
		}
		void Sum(float c, float d)
		{
			cout << "\nThe sum of floats is :" << c + d << endl;
		}
		void Sum(int e, float f)
		{
			cout << "\nThe sum of float and integer is :" << e + f << endl;
		}
};

int main()
{

	NewSum a;
	
	a.Sum(10, 20);
	a.Sum(9.5, 19.5);
	a.Sum(10, 21.5);
	return 0;
}
