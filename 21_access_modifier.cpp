#include <bits/stdc++.h>
using namespace std;
class Employee
{
private:
    int a, b, c;

public:
    int d, e;
    int setData(int a1, int b1, int c1); // declaration
    void getData()
    {
        cout << "a=" << a << endl;
        cout << "b=" << b << endl;
        cout << "c=" << c << endl;
        cout << "d=" << d << endl;
        cout << "e=" << e << endl;
    }
};
int Employee::setData(int a1, int b1, int c1)
{
    a = a1;
    b = b1;
    c = c1;
    return 0;
}
int main()
{
    Employee ee;
    // ee.a = 31; cant be done because a is private;
    ee.setData(1, 2, 3);
    ee.getData();
    return 0;
}
