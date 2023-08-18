#include <bits/stdc++.h>
using namespace std;
class Num
{

    static int count;

public:
    Num()
    {
        count++;
        cout << "Constructor invoked " << count << endl;
    }
    ~Num()
    {
        count--;
        cout << "Destructor invoked " << count << endl;
    }
};
int Num::count = 0;
int main()
{
    Num n1;
    // cout << Num::count << endl;
    cout << "start scope" << endl;
    {
        Num n2, n3;
    }
    cout << "end scope" << endl;

    return 0;
}