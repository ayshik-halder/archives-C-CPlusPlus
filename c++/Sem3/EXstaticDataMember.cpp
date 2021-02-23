#include<iostream>
using namespace std;

class A{
    public:
        static int i;
        A(){

        };
};
int A::i = 10;

int main()
{
    A a1, a2;
    cout << a1.i << "\n" << a2.i << endl;
    return 0;
}