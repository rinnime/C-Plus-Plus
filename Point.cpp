// Point.cpp

#include <iostream>

using namespace std;

class Point
{
public:
    int x;
    int y;

    Point(int x = 0, int y = 0)
        : x(x)
        , y(y)
    {

    }

    // Addition: p1 + p2
    Point operator+(const Point& other) const
    {
        return Point(x + other.x, y + other.y);
    }

    // Subtraction: p1 - p2
    Point operator-(const Point& other) const
    {
        return Point(x - other.x, y - other.y);
    }

    // Negation: p1 = -p2;
    Point operator-() const
    {
        return Point(-x, -y);
    }

    // Multiplication: p1 * 5
    Point operator*(int s) const
    {
        return Point(x * s, y * s);
    }

    // Multiplication: 5 * p1
    friend Point operator*(int s, const Point& p)
    {
        return Point(p.x * s, p.y * s);
    }

    friend ostream& operator<<(ostream& left, const Point& right)
    {
        left << "(" << right.x << ", " << right.y << ")";
        return left;
    }
};

int main()
{
    Point p1(10, 5);
    Point p2(5, 1);
    Point p3(2, 8);

    Point p4 = p1 + p2 - p3;
    cout << p4 << endl;
    cout << -p4 << endl;

    Point p5 = p1 * 5;
    Point p6 = 5 * p1;

    cout << p5 << p6 << endl;

    return 0;
}
