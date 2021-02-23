#include <iostream>
using namespace std;
int rect(int a, int b)
{
	cout << "The paremeter of the rectangle is : " << 2*(a+b) << endl;
	cout << "The area of the rectangle is : " << (a*b) << endl;
}

int sqr(int a)
{
	cout << "The paremeter of the square is : " << a*a << endl;
	cout << "The area of the square is : " << 4*a << endl;
}

int main()
{
	int a, b, r, ch;
	cout << "Enter 1 for Rectangle, enter 2 for Square and enter 3 for EXIT" << "\n";
	while(1)
	{
	
		cout << "Enter your choice : ";
		cin >> ch;
		switch(ch)
		{
			case 1:
				cout << "Enter the length and breadth of the Rectangle : ";
				cin >> a >> b;
				rect(a, b);
				break;
			case 2:
				cout << "Enter the length of any side of the Square : ";
				cin >> r;
				sqr(r);
				break;
			case 3:
				cout << "\n" << "RETURN TO HOME";
				exit(0);	
		}
	}
	return 0;
}
