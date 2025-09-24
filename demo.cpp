#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int x, y;
    cin >> x;
    y = abs(x);

    int count = log10(y) + 1;

    cout << "Number of digits in " << x << " is " << count << "\n";
}