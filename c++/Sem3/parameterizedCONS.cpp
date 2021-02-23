#include<iostream>
using namespace std;

class Student{
		int id;
		string name;
	public:
		Student()
		{
			cout << "Default Constractor Invoked" << endl;
		}
		Student(int i, string n)
		{
			id = i;
			name = n;
		}
		display()
		{
			cout << "Name : " << name << "ID : " << id << endl;
		}
};

int main(void)
{
	Student s1;
	Student s2;
	Student s3(813, "ULTRON	");
	s3.display();
	return 0;
}
