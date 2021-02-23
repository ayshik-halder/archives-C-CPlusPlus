#include<iostream>
using namespace std;

class Distance{
    int ft, inc;
    public:
        Distance()
        {
            ft = 0;
            inc = 0;
        }
        Distance(int f, int i)
        {
            ft = f;
            inc = i;
        }
        friend ostream& operator << (ostream &output, const Distance &D)
        {
            output << "Feet : " << D.ft << "\tInch : " << D.inc;
            return output;
        }
        friend istream& operator >> (istream &input, Distance &D)
        {
            input >> D.ft >> D.inc;
            return input;
        }
};

int main()
{
    Distance D1, D2;
    cout << "Insert the Distance for D1 : ";
    cin >> D1;
    cout << "Insert the Distance for D2 : ";
    cin >> D2;
    cout << "Distance D1 : " << D1 << endl;
    cout << "Distance D2 : " << D2 << endl;
    return 0;
}