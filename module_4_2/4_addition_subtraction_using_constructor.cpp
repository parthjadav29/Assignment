#include <iostream>
using namespace std;
class calc
{
protected:
    int a, b;

public:
    calc()
    {
        cout << "\n Enter a value=";
        cin >> a;
        cout << "\n Enter b value=";
        cin >> b;
    }
    void calculator()
    {
        cout << "\n Addition=" << a + b;
        cout << "\n Subtraction=" << a - b;
        cout << "\n Multiplication=" << a * b;
        cout << "\n Division=" << a / b;
    }
};
int main()
{
    calc c;
    c.calculator();
}