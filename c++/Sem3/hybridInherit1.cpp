#include<iostream>
#include<cstring>
using namespace std;
class student
{
    protected:
    string name;
    int roll;
    public:
    void get_id(string& s_name, int s_roll)
    {
        name = s_name;
        roll = s_roll;
    }
    void put_id()
    {
        cout << " \n\n STUDENT INFO: \nStudent Name:\t" << name << "\nStudent Roll: \t" << roll ;
    }
};
class academic : virtual public student
{
    protected:
    float marks1, marks2 ;
    public:
    void get_marks(float x, float y) 
    {   
        marks1 = x;
        marks2 = y;
    }
    void put_marks()
    {
        cout << " \n\n ACADEMIC MARKS: \nMarks1:\t" << marks1 << "\nMarks2:\t" << marks2 ;
    }
};
class extracurriculum : virtual public student
{
    protected:
    float extra_marks ;
    public:
    void get_extra(float z) 
    {   
        extra_marks = z; 
    }
    void put_extra()
    {
        cout << " \n\n EXTRACURRICULUM MARKS: " << extra_marks ;
    }
};
class marksheet: public academic, public extracurriculum
{
    float total_marks;
    public:
    void display()
    {
        total_marks = marks1 + marks2 + extra_marks;
        put_id();
        put_marks();
        put_extra();
        cout << "\n\nTOTAL MARKS:" << total_marks;
    }
};
int main()
{
    int n,i,roll;
    float m1,m2,t1;
    string name;
    cout << "\n Enter No. of students:";
    cin >> n ;
    marksheet s1[n];
    cout <<"\nSTUDENT INPUTS\n";
    for(i = 0 ; i < n ; i++)
    {
        cout << "\n Enter detail of Student No." << i+1 << ":";
        cout << "\n Enter name: ";
        cin >> name;
        cout << "\n Enter roll: ";
        cin >> roll;
        cout << "\n Enter Marks 1: ";
        cin >> m1;
        cout << "\n Enter Marks 2: ";
        cin >> m2;
        cout << "\n Enter ExtraCurricular marks: ";
        cin >> t1;
        s1[i].get_id(name,roll);
        s1[i].get_marks(m1,m2);
        s1[i].get_extra(t1);
    }
    for ( i = 0; i < n; i++)
    {
        cout << "\t______XXXXXXXX_______\t" ;
        s1[i].display();
    }
    
}
