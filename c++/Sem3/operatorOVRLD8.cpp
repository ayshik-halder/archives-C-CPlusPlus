#include<iostream>
#include<stdlib.h>
using namespace std;

class Student{
    int id;
    string name;
    public:
        void getData()
        {
            cout << "\nEnter the details of the student : ";
            cout << "\nEnter Name : ";
            cin >> name;
            cout << "\nEnter ID : ";
            cin >> id;
        }
        void display()
        {
            cout << "\nName :" << name << "\tID : " << id;
            cout << endl;
        }
        void * operator new(size_t Size)
        {
            cout << "\nOverloading new operator (with size) : " << Size<< endl;
            void * pt = ::new Student();
            return pt;
        }
        void operator delete(void *p)
        {
            cout << "Overloading delete operator" << endl;
            free(p);
        }
};

int main()
{
    Student * S = new Student;
    S ->getData();
    S ->display();

    delete S;
    return 0;
}

