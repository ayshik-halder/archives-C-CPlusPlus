#include<iostream>
using namespace std;

class Student{
	public:
		Student()
		{
			cout << "Default Constractor Invoked" << endl;
		}
};

int main(void)
{
	Student s1;
	Student s2;
	return 0;
}


