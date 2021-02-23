#include<iostream>
using namespace std;

class B;

class A{
	int a;
	public:
		getData()
		{
			cout << "\nEnter the number : " << endl;
			cin >> a;
		}
		
		friend int add(A, B);
};

class B{
	int b;
	public:
		getdata()
		{
			cout << "\nEnter the number : " << endl;
			cin >> b;
		}
		
		friend int add(A, B);
};

int add(A objA, B objB)
{
	return (objA.a + objB.b);
}

int main()
{
	A A1;
	B B1;
	
	A1.getData();
	B1.getdata();
	
	cout << "\nSum of the objects of class A and class B is : " << add(A1, B1);
	
	return 0;
}
