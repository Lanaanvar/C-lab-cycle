#include<iostream>
#include<cmath>
using namespace std;

class shapes
{
    public:
    double area(double r);
    int area(int l, int b);
    int area(int a);
    int area(int a,int b,int c);
    double area(int a, int b, double h);
};

double shapes::area(double r)
{
    cout<<"area = "<<3.14*r*r<<"\n";
}
int shapes::area(int l, int b)
{
    cout<<"area = "<<int(l*b)<<"\n";
}
int shapes::area(int a)
{
    cout<<"area = "<<a*a<<"\n";
}
int shapes::area(int a, int b, int c)
{
    int s= (a+b+c)/2;

    cout<<"area = "<<sqrt(s*(s-a)*(s-b)*(s-c))<<"\n";
}
double shapes::area(int a, int b, double h)
{
    cout<<"area = "<<float(((a+b)*h)/2)<<"\n";
}

int main()
{
    shapes s1;
    int x,a,b,c,h; double r;
     do
     {
        cout<<"select shape to find area : "<<"\n";
        cout<<"1. square "<<"\n";
        cout<<"2. trapezium"<<"\n";
        cout<<"3. triangle"<<"\n";
        cout<<"4. rectangle"<<"\n";
        cout<<"5. circle"<<"\n";

        cout<<"enter the option number: ";
        cin>>x;

        switch(x)
        {
            case 1: cout<<"enter side length : ";
                    cin>>a;
                    s1.area(a); break;
            case 2: cout<<"enter lengths of 2 parallel sides and height respectively : ";
                    cin>>a>>b>>h;
                    s1.area(a, b, h); break;
            case 3: cout<<"enter lengths of 3 sides : ";
                    cin>>a>>b>>c;
                    s1.area(a, b, c); break;
            case 4: cout<<"enter length and breadth : ";
                    cin>>a>>b;
                    s1.area(a,b);break;
            case 5: cout<<"enter radius : ";
                    cin>>r;
                    s1.area(r); break;

            default : cout<<"the entered number is invalid "<<"\n"; break;
        }
        
     }
      while (x>5);

      return 0;
}