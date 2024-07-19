#include <iostream>
using namespace std;
class Rectangle
{
    int length;
    int breadth;

public:
    void setLength(int l)
    {
        length = 1;
    }
    void setBreadth(int b)
    {
        breadth = b;
    }
    int getLength()
    {
        return length;
    }
    int getBreadth()
    {
        return breadth;
    }
    int area()
    {
        return length * breadth;
    }
    int perimter()
    {
        return 2 * (length + breadth);
    }
};
class Cuboid : public Rectangle
{
    int heigth;

public:
    Cuboid(int l = 0, int b = 0, int h = 0)
    {
        heigth = l;
        setLength(l);
        setBreadth(b);
    }
    void setHeigth(int h)
    {
        heigth = h;
    }
    int getHeigth()
    {
        return heigth;
    }
    int vol()
    {
        return getLength()*getBreadth()*heigth;
    }
};
int main()
{
    Cuboid c;
    
}