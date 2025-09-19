# Roman to Integer

Roman numerals are represented by seven different symbols: I, V, X, L, C, D and M.

Symbol Value
I 1
V 5
X 10
L 50
C 100
D 500
M 1000
For example, 2 is written as II in Roman numeral, just two ones added together. 12 is written as XII, which is simply X + II. The number 27 is written as XXVII, which is XX + V + II.

Roman numerals are usually written largest to smallest from left to right. However, the numeral for four is not IIII. Instead, the number four is written as IV. Because the one is before the five we subtract it making four. The same principle applies to the number nine, which is written as IX. There are six instances where subtraction is used:

I can be placed before V (5) and X (10) to make 4 and 9.
X can be placed before L (50) and C (100) to make 40 and 90.
C can be placed before D (500) and M (1000) to make 400 and 900.
Given a roman numeral, convert it to an integer.

`input.txt`

```txt
LVIII
```

`demo.cpp`

```cpp
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
```

`output.txt`

```txt
58
```

## Results

Runtime: 7 ms - Your runtime beats 51.73 % of cpp submissions.

Memory Usage: 13.4 MB - Your memory usage beats 18.76 % of cpp submissions.
