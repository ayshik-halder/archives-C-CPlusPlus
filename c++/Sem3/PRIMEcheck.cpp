#include <iostream>
using namespace std;

int main()
{
	int n, i, c=0;
	cout << "Enter the Number to check prime : ";
	cin >> n;
	cout << endl;
	for(i=2; i<n; i++)
	{
		if(n%i == 0)
		{
			cout << "Number " << n << " is not PRIME" << endl;
			c++;
			break;
		}
	}
	if(c==0)
		cout << "Number " << n << " is PRIME" << endl;
	return 0;
}



