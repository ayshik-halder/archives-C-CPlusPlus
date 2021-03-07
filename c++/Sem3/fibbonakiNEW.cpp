#include<iostream>
using namespace std;

int main()
{
	int n, i, f, t1=0, t2=1;
	cout << "Enter the number of terms :";
	cin >> n;
	cout << "Fibonacci series : \t";
	for(i=1; i<=n; i++)
	{
		cout << t1 << "\t";
		f=t1+t2;
		t1=t2;
		t2=f;
	}
	return 0;
}



