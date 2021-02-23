#include<iostream>
using namespace std;

class Time{
	int Hr, Min, Sec;
	public:
		void getData()
		{
			cout << "\nEnter the time(hour minute and second respectedly) : " << endl;
			cin >> Hr >> Min >> Sec;
		}
		void display()
		{
			cout << "\nThe time is : " << endl;
			cout << Hr << "hour " << Min << "minute " << Sec << "second" ;
			cout << endl;
		}
		Time operator +(Time const &T)
		{
			Time sum;
			sum.Hr = Hr + T.Hr;
			sum.Min = Min + T.Min;
			sum.Sec = Sec + T.Sec;
			if(sum.Sec >= 60)
			{
				sum.Min++;
				sum.Sec -= 60;
			}
			if(sum.Min >= 60)
			{
				sum.Hr++;
				sum.Min -= 60;
			}
			return sum;
		}
		Time operator -(Time const &T)
		{
			Time sub;
			if(Sec >= T.Sec)
				sub.Sec = Sec - T.Sec;	
	        else if(Sec < T.Sec)
	        	sub.Sec = T.Sec - Sec;		
			
			if(Min >= T.Min)
				sub.Min = Min - T.Min;	
	        else if(Min < T.Min)
	        	sub.Min = T.Min - Min;		
			
			if(Hr >= T.Hr)
				sub.Hr = Hr - T.Hr;	
	        else if(Hr < T.Hr)
	        	sub.Hr = T.Hr - Hr;		
			
			return sub;
		}
};

int main()
{
	Time T1, T2, Ts, Td;
	
	T1.getData();
	T1.display();
	
	T2.getData();
	T2.display();
		
	Ts = T1 + T2;
	Td = T1 - T2;
	
	cout << "\nThe Addition of these two times is : " << endl;
	Ts.display();
	
	cout << "\nThe Subtraction of these two times is : " << endl;
	Td.display();
		
	return 0;
}
