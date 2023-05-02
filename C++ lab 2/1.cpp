#include<iostream>
#include<cmath>
using namespace std;
const int size=3;
class vector
{
    private:
    double a[size], mag;

    public:
    vector(){};
    double magn()
    {
        double sum;
        for(int i=0; i<3; i++)
        {
            sum+=a[i]*a[i];
        }

        mag=sqrt(sum);

        return mag;
    }
    void operator ==(vector&p);
    void operator !=(vector&p);
    void operator <(vector&p);
    void operator <=(vector&p);
    void operator >(vector&p);
    void operator >=(vector&p);
    friend istream & operator >>(istream &din, vector&x);
    friend ostream & operator<< (ostream &dout, vector&x);
};
void vector:: operator ==(vector&p)
{
    if(mag==p.mag)
    {
        cout<<"the vector magnitudes are equal "<<"\n";
    }
    else
    {
        cout<<"the vector magnitudes are not unequal "<<"\n";
    }
}
void vector :: operator !=(vector&p)
{
    if (mag!=p.mag)
    {
        cout<<"the vector magnitudes are not equal "<<"\n";
    }
    else
    {
        cout<<"the vector magnitudes are equal "<<"\n";
    }
}
void vector ::operator<(vector&p)
{
    int res;
    if (mag<p.mag)
    {
        cout<<"the vector magnitude of v1 is less than v2 "<<"\n";
    }
    else if(mag==p.mag)
    {
        cout<<"the vector magnitudes are equal "<<"\n";
    }
    else
    {
        cout<<"the vector magnitude of v1 is not less than v2 "<<"\n";
    }
}
void vector :: operator<=(vector&p)
{
    if (mag<=p.mag)
    {
        cout<<"the vector magnitude of v1 is less or equal to v2 "<<"\n";
    }
    else
    {
        cout<<"the vector magnitude of v2 is less than or equal to v1 "<<"\n";
    }
}
void vector :: operator >(vector&p)
{
    if (magn()>p.magn())
    {
        cout<<"the vector magnitude of v1 is greater than v2 "<<"\n";
    }
    else if(mag==p.mag)
    {
        cout<<"the vector magnitudes are equal "<<"\n";
    }
    else
    {
        cout<<"the vector magnitude of v2 is greater than v1 "<<"\n";
    }
}
void vector::operator >=(vector&p) 
{
    if (magn()>p.magn())
    {
        cout<<"the vector magnitude of v1 is greater than or equal to v2 "<<"\n";
    }
    else
    {
        cout<<"the vector magnitude of v2 is greater than or equal to v1 "<<"\n";
    }
}

istream & operator >>(istream &din, vector&x)
{
    for(int i=0; i<3; i++)
    {
        din>>x.a[i];
    }
    return din;
}
ostream & operator<< (ostream &dout, vector&x)
{
    dout<<"<"<<x.a[0];
    for(int i=1; i<3; i++)
    {
        dout<<", "<<x.a[i];
    }
    dout<<">"<<"\n";
    return dout;
}
int main()
{
    vector v1;
    cout<<"enter vector values for v1 : ";
    cin>>v1;

    cout<<"\n";
    cout<<" vector v1 = "<<v1<<"\n";
    cout<<"magnitude = "<<v1.magn()<<"\n";

    vector v2;
    cout<<"enter vector values for v2 : ";
    cin>>v2;

    cout<<"\n";
    cout<<" vector v2 = "<<v2<<"\n";
    cout<<"magnitude = "<<v2.magn()<<"\n";

    int x;

    do
    {
        cout<<"choose the operator : "<<"\n";
        cout<<"1. v1==v2"<<"\n";
        cout<<"2. v1>v2"<<"\n";
        cout<<"3. v1>=v2"<<"\n";
        cout<<"4. v1<v2"<<"\n";
        cout<<"5. v1<=v2"<<"\n";
        cout<<"6. v1!=v2"<<"\n";

        cout<<"enter the option : ";
        cin>>x;

        switch(x)
        {
            case 1: v1==v2; break;
            case 2: v1>v2; break;
            case 3: v1>=v2; break;
            case 4: v1<v2; break;
            case 5: v1<=v2; break;
            case 6: v1!=v2; break;

            default: cout<<"wrong option entered; please retry "<<"\n";break;
        }
    }
    while(x!=6);
    return 0;

}
