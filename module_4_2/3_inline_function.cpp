#include <iostream>
using namespace std;
inline void multiplication(int a, int b, int c)
{
    cout << " The multiplication values.." << endl;
    cout << " Multiplication=" << a * b * c << endl;
}
inline void cube(int x)
{

    cout << "\n The cubic value .." << endl;
    cout << " Cube=" << x * x * x;
}

int main()
{
    multiplication(2, 3, 4);
    cube(5);
}