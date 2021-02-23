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
		Height operator + (Height const &H)
		{
			Height sum;
			
			sum.inc = inc + H.inc;
			sum.feet = feet + H.feet + sum.inc / 12;
			sum.inc %= 12;
			
			return sum;
		}
	/*	Height operator + (Height const &H)
		{
			Height sum;
			sum.feet = feet + H.feet;
			sum.inc = inc + H.inc;
			if(sum.inc >= 12)
			{
				sum.feet++;
				sum.inc -= 12;
			}
			return sum;
		}*/
		Height operator - (Height const &H)
		{
			Height sub;
			if(inc >= H.inc)
				sub.inc = inc - H.inc;
			else if(inc < H.inc)
				sub.inc = H.inc - inc;	
				
		   if(feet >= H.feet)
		    	sub.feet = feet - H.feet;
		   else if(feet < H.feet)
		    	sub.feet = H.feet - feet;	
		    	
			return sub;
		}
		
};

int main()
{
	Height H1, H2, Sum, Sub;
	
	H1.getData();
	H1.display();
	
	H2.getData();
	H2.display();
	
	Sum = H1 + H2;
	Sub = H1 - H2;
	
	cout << "\nSum of the heigts is : " << endl;
	Sum.display();
	
	cout << "\nSubtaction of the height is : " << endl;
	Sub.display();
	
	return 0;
}
