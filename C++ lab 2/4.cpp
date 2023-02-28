#include<iostream>
using namespace std;
class matrix
{
    private:
    int **p;
    int r,c;

    public:
    matrix(){};
    matrix(int, int);
    void input();
    matrix add(matrix, matrix);
    void display();
};
matrix::matrix(int d1, int d2)
{
    r=d1;
    c=d2;

    p= new int *[r];

    for(int i=0; i<r; i++)
    {
        p[r]=new int [c];
    }
}
void matrix::input()
{
    cout<<"Enter the values row by row : "<<"\n";

    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            cin>>p[i][j];
        }
    }
}
matrix matrix::add(matrix x, matrix y)
{
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            cout<<x.p[i][j]+y.p[i][j]<<" ";
        }

        cout<<"\n";
    }
}
void matrix::display()
{
    cout<<"the matrix : "<<"\n";

    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            cout<<p[i][j]<<" ";
        }

        cout<<"\n";
    }
}

int main()
{
    int d1,d2;
    cout<<"Enter the number of rows and columns respectively : ";
    cin>>d1>>d2;
    matrix m1(d1,d2);
    m1.input();
    m1.display();

    cout<<"Enter the number of rows and columns respectively : ";
    cin>>d1>>d2;
    matrix m2(d1,d2);
    m2.input();
    m2.display();

    matrix m3;
    m3.add(m1,m2);
    cout<<"matrix after addition : "<<"\n";
    m3.display();



    return 0;

}