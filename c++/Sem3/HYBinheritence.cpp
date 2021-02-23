#include<iostream>
using namespace std;

class Area{
    protected:
        int width, height;
    public:
        Area()
        {
        }
        Area(int w, int h)
        {
            width = w;
            height = h;
        }
        void getData()
        {
            cout << "Enter the length and breathe : " << endl;
            cin >> width >> height;
        }
        void display()
        {
            cout << "Width : " << width << "\tHeight : " << height;
            cout << endl;
        }
        int getArea()
        {
            cout << "Parent Class :  ";
            return 0;
        }
};

class Rectangle : public Area{
    public:
        Rectangle()
        {
        }
        Rectangle(int w, int h)
        {
            width = w;
            height = h;
        }
        int getArea()
        {
            Area :: getArea();
            cout << "Area of the Rectangle : ";
            return (width * height);
            cout << endl;
        }
};

class Triangle : public Area{
    public:
        Triangle()
        {
        }
        Triangle(int w, int h)
        {
            width = w;
            height = h;
        }
        int getArea()
        {
            Area :: getArea();
            cout << "Area of the Triangle : ";
            return ((width * height) / 2);
            cout << endl;
        }
};

int main()
{
    Rectangle R1;
    Triangle T1;

    R1.getData();
    T1.getData();

    R1.display();
    T1.display();

    cout << "Area of The Rectangle : "  << R1.getArea() << endl;
    cout << "Area of The Triangle : " << T1.getArea() << endl;

    return 0;
}