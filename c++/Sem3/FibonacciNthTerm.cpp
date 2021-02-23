#include <iostream>
using namespace std;

int main()
{
    int n, t1=0, t2=1, t3, i;

    cout << "Enter the number of terms: ";
    cin >> n;

    cout << n <<"th term of Fibonacci Series is:  ";	
	if(n == 1)
        cout << t1 ;
    else if(n == 2)
		cout << t2;
	else
    {
    	for (i = 3; i <= n; ++i)
    	{	
			t3 = t1 + t2;
        	t1 = t2;
        	t2 = t3;	
		}
		cout << t3 << "\t";
	}
	
    return 0;
}
