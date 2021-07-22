#include<iostream>
using namespace std;

void cmSum(int a1, int b1, int a2, int b2)
{
	int a, b;
	a = a1 + a2;
	b = b1 + b2;
	
	cout << a << " + " << b << "i";
}

int main()
{
	int a1, a2, b1, b2;
	
	cout << "Enter the 1st complex number(real part and complex part respectively) : ";
	cin >> a1 >> b1;
	
	cout << "Enter the 2nd complex number(real part and complex part respectively) : ";
	cin >> a2 >> b2;
	
	cout << "The sum of the two comlex number is : " << endl;
	cmSum(a1, b1, a2, b2);
	
	return 0;
}
