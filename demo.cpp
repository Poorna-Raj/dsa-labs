#include <iostream>
#include <map>

using namespace std;

int main()
{
    string s;
    cin >> s;
    int value = 0;
    int prev = 0;
    map<char, int> numValues;
    numValues['I'] = 1;
    numValues['V'] = 5;
    numValues['X'] = 10;
    numValues['L'] = 50;
    numValues['C'] = 100;
    numValues['D'] = 500;
    numValues['M'] = 1000;

    for (int i = s.length() - 1; i >= 0; i--)
    {
        int currentVal = numValues[s[i]];

        if (prev > currentVal)
        {
            value -= currentVal;
        }
        else
        {
            value += currentVal;
        }

        prev = currentVal;
    }

    cout << value;
}