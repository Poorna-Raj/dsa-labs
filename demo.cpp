#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int x;
    cin >> x;
    int count = 0;

    for (int i = 1; i <= x; i++)
    {
        if (x % i == 0)
        {
            count++;
        }
    }

    if (count != 2)
    {
        cout << x << " is not a prime number." << "\n";
    }
    else
    {
        cout << x << " is a prime number." << "\n";
    }
}