#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main()
{
    int x, y;
    cin >> x >> y;
    int gcd;

    while (x > 0 && y > 0)
    {
        if (x > y)
        {
            x %= y;
        }
        else
        {
            y %= x;
        }
    }

    if (x == 0)
    {
        cout << "GCD = " << y;
    }
    else
    {
        cout << "GCD = " << x;
    }
}