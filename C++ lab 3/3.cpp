#include <iostream>
using namespace std;

int main()
{
    double numer, denom, res;
    cout << "enter numerator and denomenator : " << endl;
    cin >> numer >> denom;

    try
    {
        if (denom == 0)
        {
            throw denom;
        }

        res = numer / denom;
        cout << "Quotient is : " << res;
    }

    catch (double x)
    {
        cout << "exception : " << x << "\n";
    }

    return 0;
}