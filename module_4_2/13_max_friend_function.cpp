/ Write a program to find the max number from given two numbers using friend function
#include <iostream>
using namespace std;
class B;
class A
{
private:
    int x;

public:
    void get_data(int a)
    {
        x = a;
    }
    void display()
    {
        cout << "x value = " << x << endl;
    }
    friend void max(A, B);
};
class B
{
private:
    int y;

public:
    void get_data(int b)
    {
        y = b;
    }
    void display()
    {
        cout << "y value = " << y << endl;
    }
    friend void max(A, B);
};
void max(A obj1, B obj2)
{
    if (obj1.x > obj2.y)
    {
        cout << "max number is = " << obj1.x << endl;
    }
    else
        cout << "max number is = " << obj2.y << endl;
}
int main()
{
    A a;
    B b;
    a.get_data(20);
    b.get_data(50);
    a.display();
    b.display();
    max(a, b);
}