#include <iostream>
using namespace std;

class Shape
{
public:
    int x, y;

    void get_data(int n, int m)
    {
        x = n;
        y = m;
    }
};
class Rectangle : public Shape
{
public:
    int area_rect()
    {
        int area = x * y;
        return area;
    }
};
class Triangle : public Shape
{
public:
    int triangle_area()
    {
        float area = 0.5 * x * y;
        return area;
    }
};
class Square : public Shape
{
public:
    int square_area()
    {
        float area = x * x;
        return area;
    }
};
int main()
{
    int length, breadth, base, height, side;
    Rectangle r;
    Triangle t;
    Square s;

    cout << "Enter the length and breadth of a rectangle: ";
    cin >> length >> breadth;
    r.get_data(length, breadth);
    int rect_area = r.area_rect();
    cout << "Area of the rectangle = " << rect_area << std::endl;
    cout << "Enter the base and height of the triangle: ";
    cin >> base >> height;
    t.get_data(base, height);
    float tri_area = t.triangle_area();
    std::cout << "Area of the triangle = " << tri_area << std::endl;

    std::cout << "Enter the length of one side of the square: ";
    cin >> side;
    s.get_data(side, side);
    int sq_area = s.square_area();
    std::cout << "Area of the square = " << sq_area << std::endl;
    return 0;
}