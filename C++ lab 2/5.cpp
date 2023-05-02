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

class D
{
    private:
    int d;

    public:
    D(){};
    D(int s)
    {
        d=s;
    }
    void show()
    {
        cout<<"d = "<<d<<"\n";
    }
};
class C: public B, public D
{
    private:
    int c;

    public:
    C(){};
    C(int p, int q, int r, int s):
    B(p,q), D(s)
    {
        c=r;
    }
    void show()
    {
        B::show();
        D::show();
        cout<<"c = "<<c<<"\n";
    }
};

int main()
{
    int x,y,z,w;
    cout<<"enter values for classes A, B, C, D : ";
    cin>>x>>y>>z>>w;

    C m(x,y,z,w);
    m.show();

    return 0;
}
