#include <iostream>
using namespace std;
class calculator
{

public:
    void calc(int y, int z)
    {
        cout << "\n Addition : " << y + z;
    }
    void calc(int num1, float num2)
    {
        cout << "\n Subtraction : " << num1 - num2;
    }
    void calc(double x, double y)
    {
        cout << "\n Multiplication : " << x * y;
    }
    void calc(double j, int k)
    {
        cout << "\n Division : " << j / k;
    }
};
int main()
{

    double a, b;

    cout << "\n Enter a value : ";
    cin >> a;
    cout << "\n Enter b value : ";
    cin >> b;

    calculator c;
    c.calc((int)a, (int)b);
    c.calc((int)a, (float)b);
    c.calc(a, b);
    c.calc(a, (int)b);
}