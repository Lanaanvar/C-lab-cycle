//multiple inheritance
#include<iostream>
using namespace std;
class A
{
    protected:
    int a;

    public:
    A(){};
    A(int x)
    {
        a=x;
    }
    void show()
    {
        cout<<"a = "<<a<<"\n";
    }
};
class B
{
    protected:
    int b;

    public:
    B(){};
    B(int y)
    {
        b=y;
    }
    void show()
    {
        cout<<"b = "<<b<<"\n";
    }
};
class C: private A, private B
{
    private:
    int c;

    public:
    C(int x, int y):
        A(x), B(y)
    {
        
        c=0;
    }
    void add()
    {
        c=a+b;
        //cout<<"the value of c is : "<<c;
    }
    void display()
    {
        A::show();
        B::show();
        cout<<"the value of c is : "<<c;
    }
};
int main()
{
    int m;
    int n;

    cout<<"enter values for a and b : ";
    cin>>m>>n;

    C r(m,n);
    r.add();
    r.display();

    return 0;

}