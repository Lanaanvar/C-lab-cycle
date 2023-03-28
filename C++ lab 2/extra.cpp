#include <iostream>
using namespace std;

class space
{
    int x;
    int y;

public:
    void getdata(int a, int b)
    {
        x = a;
        y = b;
    }
    void display()
    {
        cout << "x = " << x;
        cout << "y = " << y;
    }
    friend space operator-(space &s);
};

space operator-(space &s)
{
    space a;
    a.x = -s.x;
    a.y = -s.y;

    return a;
}

int main()
{
    space s1, s2;

    s1.getdata(10, 20);
    s1.display();

    s2 = -s1;

    s2.display();

    return 0;
}
