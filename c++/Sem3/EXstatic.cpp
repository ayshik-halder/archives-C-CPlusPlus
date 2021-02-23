#include<iostream>
#include<string.h>
using namespace std;

void funStatic()
{
	static int j=10;
	cout << j << endl;
	j++;
}

int main()
{
	int i;
	for(i=0; i<=5; i++)
		funStatic();
	return 0;
}
