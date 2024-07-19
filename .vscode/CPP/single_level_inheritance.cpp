#include <iostream>
using namespace std;
class Shape
{
protected:
    int heigth;
    int width;

public:
    void setheigth(int h)
    {
        heigth = h;
    }
    void setwidth(int w)
    {
        width = w;
    }
};
class Rectangle : public Shape
{
public:
    int getArea()
    {
        return (heigth * width);
    }
};
int main()
{
    Rectangle rect;
    rect.setheigth(2);
    rect.setwidth(3);
    cout << "Area is " << rect.getArea() << endl;
}