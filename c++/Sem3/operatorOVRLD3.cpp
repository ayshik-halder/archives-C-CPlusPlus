#include<iostream>
using namespace std;

class Height{
	int feet, inc;
	public:
		getData()
		{
			cout << "Enter the Height(in ft and inch): ";
			cin >> feet >> inc;
		}
		display()
		{
			cout << "\nThe height is :" << feet << "ft " << inc << "inch";
			cout << endl;
		}
		bool operator > (Height const &H)
		{
			if(feet > H.feet)
				return true;
			else if(feet == H.feet && inc > H.inc)
				return true;
			else
				return false;
		}
		bool operator < (Height const &H)
		{
			if(feet < H.feet)
				return true;
			else if(feet == H.feet && inc < H.inc)
				return true;
			else
				return false;
		}
};

int main()
{
	Height H1, H2;
	
	H1.getData();
	H1.display();
	
	H2.getData();
	H2.display();
	
	if(H1 > H2)
		cout << "\nFirst one heigher than Second one" << endl;
	else if(H1 < H2)
		cout << "\nSecond one heigher than First one" << endl;
	else
		cout << "\nBoth are same height" << endl;
		
	return 0;
}
