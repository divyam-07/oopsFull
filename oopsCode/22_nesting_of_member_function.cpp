// you can call another function from the function which is using private thing
#include <bits/stdc++.h>
using namespace std;
class binary
{
    string s;

public:
    void read(void);
    void chk_bin(void);
    void display(void)
    {
        cout << s << endl;
    }
    void compliment(void)
    {
        chk_bin();
        for (auto &it : s)
        {
            if (it == '1')
                it = '0';
            else
                it = '1';
        }
    }
};
void binary::read(void)
{
    cout << "Enter the string: ";
    cin >> s;
}
void binary::chk_bin(void)
{
    for (auto it : s)
    {
        if (it != '0' && it != '1')
        {
            cout << "Incorrect" << endl;
            exit(0);
        }
    }
}
int main()
{
    binary b;
    b.read();
    // b.chk_bin(); nested inside the compliment;
    b.compliment();
    b.display();
    return 0;
}