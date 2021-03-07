#include<iostream>
using namespace std;
class Person{
	public:
		string gen, name;
		int age;
		void getData()
		{
			cout << "Enter Name: ";
			cin >> name;
			cout << "\nEnter Gender: ";
			cin >> gen;
			cout << "\nEnter Age: ";
			cin >> age;
		}
		void display()
		{
			cout << "\nName : " << name;
			cout << "\nGender : " << gen;
			cout << "\nAge : " << age;
		}
};
class Student : public Person{
	public:
		string cnt;
		string SiD;
		void getD()
		{
			cout << "\nEnter Student ID: ";
			cin >> SiD;
			cout << "\nEnter Contact NO.: ";
			cin >> cnt;
		}
		void show()
		{
			cout << "\nStudent ID : " << SiD;
			cout << "\nContact NO. : " << cnt << endl;
		}
};

int main()
{
	Student S1;
	S1.getData();
	S1.getD();
	S1.display();
	S1.show();
	return 0;
}

