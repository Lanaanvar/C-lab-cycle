#include<iostream>
using namespace std;

template <typename T, typename U>
class number
{
    private:
    T wholenum;
    U decimalnum;

    public:
    T get_wholevalue()
    {
        cout<<"enter whole number : ";
        cin>>wholenum;

        return wholenum;
    }
    U get_decimalvalue()
    {
        cout<<"\nenter decimal number : ";
        cin>>decimalnum;

        return decimalnum;
    }

    void show_value()
    {
        cout<<"whole number : "<<get_wholevalue()<<"\n";
        cout<<"decimal number : "<<get_decimalvalue()<<"\n";
    }
};

int main()
{
    number <int, double>n1;
    n1.show_value();

    return 0;

}

