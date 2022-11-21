
#include <iostream>
using namespace std;
class student
{
protected:
    int roll_number;

public:
    void get_roll_num()
    {
        cout << "\n Enter student roll number : ";
        cin >> roll_number;
    }
};
class test : public student
{
protected:
    int state, account;

public:
    void marks()
    {
        cout << "\n Enter state marks : ";
        cin >> state;
        cout << "\n Enter account marks : ";
        cin >> account;
    }
};
class result : public test
{
private:
    int total_mark;

public:
    void total_marks()
    {
        total_mark = state + account;
    }

    void detail()
    {
        cout << "\n______Student Detail_____";
        cout << "\n";
        cout << "\n Roll number of student : " << roll_number;
        cout << "\n State marks : " << state;
        cout << "\n Account marks : " << account;
        cout << "\n________________________";
        cout << "\n Total marks of two subject : " << total_mark;
    }
};
int main()
{
    result r;
    r.get_roll_num();
    r.marks();
    r.total_marks();
    r.detail();
}