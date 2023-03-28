#include <iostream>
using namespace std;
class student
{
protected:
    int rollnum;

public:
    void get_rollnum()
    {
        cout << "Enter roll number of the student : ";
        cin >> rollnum;
    }
    void show_rollnum()
    {
        cout << "Roll number : " << rollnum << "\n";
    }
};

class test : virtual public student
{
protected:
    float sub1, sub2, sub3;

public:
    void get_marks()
    {
        cout << "Enter the marks of the three subjects one by one (out of 100): ";
        cin >> sub1 >> sub2 >> sub3;
    }
    void show_marks()
    {
        cout << "the marks of English : " << sub1 << "\n";
        cout << "the marks of Maths : " << sub2 << "\n";
        cout << "the marks of Biology : " << sub3 << "\n";
    }
};

class sports : virtual public student
{
protected:
    float score;

public:
    void get_score()
    {
        cout << "Enter score (out of 100): ";
        cin >> score;
    }
    void show_score()
    {
        cout << "Score : " << score << "\n";
    }
};

class result : public test, public sports
{
private:
    float percentage;

public:
    void get_total()
    {
        percentage = (sub1 + sub2 + sub3 + score) / 4;
    }
    void display()
    {
        show_rollnum();
        show_marks();
        show_score();
        cout << "The total percentage : " << percentage << "%";
    }
};
int main()
{
    result r;
    r.get_rollnum();
    r.get_marks();
    r.get_score();
    r.get_total();
    r.display();

    return 0;
}