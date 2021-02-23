#include<iostream>

using namespace std ;

class parent
{
private:
    
public:
    void greet(){
        cout << "Parent" << endl ;
    }
};

class child : public parent 
{
    private:

    public:
        void greet(){
            cout<< "child" << endl ;
        }
};

int main(){
    parent a = parent();
    child b = child();
    a.greet();
    b.greet();
    return 0;
}

