#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int x, y, reverse;
    cin >> x;
    y = abs(x);
    reverse = 0;

    while (y > 0)
    {
        reverse = (reverse * 10) + y % 10;
        y /= 10;
    }

    cout << "Reverse = " << reverse << "\n";
}