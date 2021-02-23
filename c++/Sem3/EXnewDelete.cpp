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
        ~Student()
        {
            cout << "Destractor Invoked";
            cout << endl;
        }
        Student(int id, string name)
        {
            this ->id = id;
            this ->name = name;
            cout << "Parameterized Constructor Invoked";
            cout << endl;
        }
        
};

int main()
{
    Student* S1 = new Student;
    Student* S2 = new Student;
    Student* S3 = new Student(813, "SUPARNO");

    delete S1;
    delete S2;
    delete S3;

    return 0;
}