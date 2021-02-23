#include<iostream>
using namespace std;

class Box{
	int H, W, L, vol;
	public:
		void getData()
		{
			cout << "\nEnter the Hieght Width and Length of the box : ";
			cin >> H >> W >> L;
		}
		int volume()
		{
			vol = H * W * L;
			return vol;
		}
		void display()
		{
			cout << "\nHeight of the Box : " << H;
			cout << "\nWidth of the Box : " << W;
			cout << "\nLength of the Box : " << L;
			cout << endl;
		}
		int operator + (Box const &obj)
		{
			int sum;
			sum = vol + obj.vol;
			return sum;
		}
};

int main()
{
	Box B1, B2;
	int S;
	
	B1.getData();
	B1.display();
	B1.volume();
	
	B2.getData();
	B2.display();
	B2.volume();
	
	S = B1 + B2;
	
	cout << "\nThe sum of the volumes is : " << S << endl;
	return 0;
}
