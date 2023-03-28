#include <iostream>
using namespace std;

class alpha
{
    protected:
    int a;

    public:
    alpha(){};
    alpha(int x)
    {
        a=x;
        cout<<"Constructor alpha called"<<"\n";
    }
    void show_alpha()
    {
         cout<<"alpha : "<<a<<"\n";
    }
};

class beta
{
    protected:
    int b;

    public:
    beta(){};
    beta(int y)
    {
        b=y;
        cout<<"Constructor beta called"<<"\n";
    }
    void show_beta()
    {
        cout<<"beta : "<<b<<"\n";
    }
};

class gamma : public beta, public alpha
{
    int g;

    public:
    gamma(){};
    gamma(int x, int y, int z):
    alpha(x), beta(y)
    {
        g=z;
        cout<<"Constructor gamma called"<<"\n";
    }
    void display()
    {
        cout<<"gamma : "<<g<<"\n";
    }
};

int main()
{
    int p, q, r;
    cout<<"enter values for a, b and g one by one : ";
    cin>>p>>q>>r;

    gamma g1(p,q,r);
    g1.show_alpha();
    g1.show_beta();
    g1.display();

    return 0;

}

