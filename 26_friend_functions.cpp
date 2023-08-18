#include <bits/stdc++.h>
using namespace std;
class Complex
{
    int x, y;

public:
    friend Complex addComplex(Complex o1, Complex o2);
    void setData(int _x, int _y)
    {
        x = _x;
        y = _y;
    }
    void display()
    {
        cout << "Number is " << x << "+"
             << "i" << y << endl;
    }
};
Complex addComplex(Complex o1, Complex o2)
{
    Complex o3;
    o3.setData(o1.x + o2.x, o1.y + o2.y);
    return o3;
}

int main()
{
    Complex c1, c2, sum;
    c1.setData(2, 3);
    c1.display();
    c2.setData(3, 4);
    c2.display();
    sum = addComplex(c1, c2);
    sum.display();
    return 0;
}
// properties of friend function :
// 1. Not in the scope of class, hence cant be called by object and can be invoked without an object
// 2. usually contains the object as arguement
// 3. can be declared inside the public or private
// 4. It cant access members directly by their name and need objectName.memberName to acess;