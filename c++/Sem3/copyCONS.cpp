#include <iostream>
using namespace std;

class AreaReC{
   private:
   	double length, width;
    
   public:
   	
   	AreaReC() 
	   {
   		cout << "\nDefault Constructor Invoked!" << endl;
	   }
    AreaReC(double l, double w) 
	{
		length = l;
        width = w;
        cout << "\nParameterized constructor Invoked!";
    }
     AreaReC(AreaReC &obj) 
	 {
        length = obj.length;
        width = obj.width;
        cout << "Copy Constructor Invoked!";
    }
    display() 
	{
      cout << "\n Length: " << length;
      cout << "\n Width: " << width;
      cout << "\n Area : " << length * width << endl;
      cout << endl;
    }
};

int main() {
	
	AreaReC A0;
	
    AreaReC A1(5.6, 6.6);
	A1.display();

    AreaReC A2 = A1;
	A2.display();
    
    return 0;
}
