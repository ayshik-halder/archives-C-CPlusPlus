#include<iostream>
using namespace std;

class Student{
    int id;
    string name;
    public:
        Student()
        {
            cout << "Default Constructor Invoked" << endl;
            id = 0;
            name = "X";
        }
        Student(int id, string name)
        {
            this ->id = id;
            this ->name = name;
            cout << "Parameterized Constructor Invoked";
        }
        void display()
        {
            cout << "Name : " << name << "\tID : " << id << endl;
        }
};

int main()
{
    Student S1, S2;
    Student S3(813, "SUPARNO");
    S1.display();
    S2.display();
    S3.display();

    return 0;
}