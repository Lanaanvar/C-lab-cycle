#include<iostream>
using namespace std;

class Abstractclass
{
    public:
    virtual void display()=0;
};

class Derived_1
{
    public:
    void display()
    {
        cout<<"object of class Derived_1 displayed"<<"\n";
    }
};

class Derived_2
{
    public:
    void display()
    {
        cout<<"object of class Derived_2 displayed"<<"\n";
    }
};

int main()
{
    Derived_1 D1;
    D1.display();

    Derived_2 D2;
    D2.display();

    return 0;
}