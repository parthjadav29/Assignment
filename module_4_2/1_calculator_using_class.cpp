// WAP to create simple calculator using class
#include <iostream>
using namespace std;
class calculator
{
private:
    int a, b, c, ch;

public:
    void calc()
    {
        cout << "Enter a value: ";
        cin >> a;
        cout << "Enter b value: ";
        cin >> b;
        cout << "____________" << endl;
        cout << "Press 1 for Addition" << endl;
        cout << "Press 2 for Subtraction" << endl;
        cout << "Press 3 for Multiplcation" << endl;
        cout << "Press 4 for Division" << endl;
        cout << "Enter choice for oparation: ";
        cin >> ch;

        if (ch == 1)
        {
            c = a + b;
            cout << "Addition =" << c << endl;
        }
        if (ch == 2)
        {
            c = a - b;
            cout << "Subtraction =" << c << endl;
        }
        if (ch == 3)
        {
            c = a * b;
            cout << "Multiplication =" << c << endl;
        }
        if (ch == 4)
        {
            c = a / b;
            cout << "Division =" << c << endl;
        }
        if (ch > 4)
        {
            cout << "Invalid choice please check";
        }
    }
};
int main()
{
    calculator obj;
    obj.calc();
    return 0;
}