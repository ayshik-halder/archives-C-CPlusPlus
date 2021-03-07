#include<iostream>
using namespace std;

int main()
{
	int u, i, l, n, c;
	cout << "Enter the range : ";
	cin >> l >> u;
	cout << "PRIME number between " << l << "and " << u << "are : ";
	n=l;
	while(n <= u)
	{
		c=0;
		for(i=2; i<n; i++)
		{
			if(n%i == 0)
				c++;
		}
		if(c==0)
			cout << n << "\t";
			n++;
	}
	return 0;
}




