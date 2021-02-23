#include<iostream>
using namespace std;
class Employee{
	public:
		int age;
		string name;
		char gen;
		
		void getData()
		{
			cout << "\nEnter the name of the Employee : ";
			cin >> name;
			cout << "\nEnter the age of the Employee : ";
			cin >> age;
			cout << "\nEnter the gender of the Employee : ";
			cin >> gen;
			cout << endl;
		}
		
		void display()
		{
			cout << "\nName of the Employee : " << name;
			cout << "\nAge of the Employee : " << age;
			cout << "\nGender of the Employee : " << gen << endl;
		}
};

int main()
{
	int n, i;
	cout << "\nEnter the number of Employee : ";
	cin >> n;
	
	Employee E[n];
	
	cout << "\nEnter Data : \n";
	for(i=0; i<n; i++)
		E[i].getData();
	
	cout << "\nData output : \n";
	for(i=0; i<n; i++)
		E[i].display();
		
	return 0;
}
