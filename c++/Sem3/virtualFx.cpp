#include <iostream>  
//using namespace std;  
class base  
{  
    private:
    
    int x=5;  
    
    public:  
    
    virtual void display()  
    {  
        std::cout << "Value of x is : " << x<<std::endl;  
    }  
};  
class sub: public base  
{  
    private:
    
    int y = 10;  
    
    public: 

    void display() override
    {  
        std::cout << "Value of y is : " <<y<< std::endl;  
    }  
};  
int main() {
    sub derived1;
    base* base1 = &derived1;

    // calls function of Base class
    base1->display();

    return 0;
}
