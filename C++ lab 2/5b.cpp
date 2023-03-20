//multilevel inheritance
#include<iostream>
using namespace std;

class A
{
    private:
    int a;

    public:
    A(){};
    A(int p)
    {
        a=p;
    }
    void show()
    {
        cout<<"a = "<<a<<"\n";
    }
};
class B: public A
{
    private:
    int b;

    public:
    B(){};
    B(int p, int q):
    A(p)
    {
        b=q;
    }
    void show()
    {
        A::show();
        cout<<"b = "<<b<<"\n";
    }
};
class C: public B
{
    private:
    int c;

    public:
    C(){};
    C(int p, int q, int r):
    B(p,q)
    {
        c=r;
    }
    void show()
    {
        B::show();
        cout<<"c = "<<c<<"\n";
    }
};

int main()
{
    int x,y,z;
    cout<<"enter values for x, y and z ";
    cin>>x>>y>>z;

    C m(x,y,z);
    m.show();

    return 0;
}
