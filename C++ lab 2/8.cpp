#include <iostream>
using namespace std;

class shapes
{
protected:
    float a, b;

public:
    virtual void display() = 0;
};

class circle : public shapes
{
public:
    void get_val()
    {
        cout << "enter radius : ";
        cin >> a;
    }
    float area()
    {
        return 3.14 * a * a;
    }
    void display()
    {
        cout << "the area of the circle is : " << area() << "\n";
    }
};

class square : public shapes
{
public:
    void get_val()
    {
        cout << "enter side : ";
        cin >> a;
    }
    float area()
    {
        return a * a;
    }
    void display()
    {
        cout << "the area of the square is : " << area() << "\n";
    }
};

class ellipse : public shapes
{
public:
    void get_val()
    {
        cout << "enter length of semi major axis : ";
        cin >> a;

        cout << "enter length of semi minor axis : ";
        cin >> b;
    }
    float area()
    {
        return 3.14 * a * b;
    }
    void display()
    {
        cout << "the area of the ellipse is : " << area() << "\n";
    }
};

class rectangle : public shapes
{
public:
    void get_val()
    {
        cout << "enter length : ";
        cin >> a;
        cout << "enter breadth : ";
        cin >> b;
    }
    float area()
    {
        return a * b;
    }
    void display()
    {
        cout << "the area of the rectangle is : " << area() << "\n";
    }
};

void function(shapes *xyz)
{
    xyz->display();
}

int main()
{
    shapes *ptr;

    circle c;
    c.get_val();
    ptr = &c;
    function(ptr);

    ellipse e;
    e.get_val();
    ptr = &e;
    function(ptr);

    rectangle r;
    r.get_val();
    ptr = &r;
    function(ptr);

    square s;
    s.get_val();
    ptr = &s;
    function(ptr);

    return 0;
}