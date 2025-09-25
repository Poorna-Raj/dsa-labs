#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int x;
    cin >> x;
    vector<int> sortedFactors;

    for (int i = 1; i * i <= x; i++)
    {
        if (x % i == 0)
        {
            sortedFactors.push_back(i);

            if ((x / i) != i)
            {
                sortedFactors.push_back(x / i);
            }
        }
    }

    sort(sortedFactors.begin(), sortedFactors.end());

    for (auto it : sortedFactors)
    {
        cout << it << "  ";
    }
}