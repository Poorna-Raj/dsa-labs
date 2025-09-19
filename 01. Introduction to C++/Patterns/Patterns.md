# Patterns

Before going into patterns, most patterns contains nested loops. The outer loop is specifically for rows and innter loop is specifically for columns.

## Pattern 1

![pattern image](assets/pattern%201.png)

`input.txt`

```txt
2
3
4
```

`demo.cpp`

```cpp
#include <iostream>

using namespace std;

void printPattern(int a);

int main()
{
    int testCases;
    cin >> testCases;

    for (int i = 0; i < testCases; i++)
    {
        int x;
        cin >> x;
        printPattern(x);
        cout << '\n';
    }
}

void printPattern(int a)
{
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; j++)
        {
            cout << '*';
        }
        cout << "\n";
    }
}
```

`output.txt`

```txt
***
***
***

****
****
****
****
```

## Pattern 2

![pattern 2](assets/pattern%202.png)

`input.txt`

```txt
2
2
4
```

`demo.cpp`

```cpp
#include <iostream>

using namespace std;

void printPattern(int a);

int main()
{
    int testCases;
    cin >> testCases;

    for (int i = 0; i < testCases; i++)
    {
        int x;
        cin >> x;
        printPattern(x);
        cout << '\n';
    }
}

void printPattern(int a)
{
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << '*';
        }
        cout << "\n";
    }
}
```

`output.txt`

```txt
*
**

*
**
***
****
```

## Pattern 3

![pattern 3](assets/pattern%203.png)

`input.txt`

```txt
2
3
5
```

`demo.cpp`

```cpp
#include <iostream>

using namespace std;

void printPattern(int a);

int main()
{
    int testCases;
    cin >> testCases;

    for (int i = 0; i < testCases; i++)
    {
        int x;
        cin >> x;
        printPattern(x);
        cout << '\n';
    }
}

void printPattern(int a)
{
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << j + 1;
        }
        cout << "\n";
    }
}
```

`output.txt`

```txt
1
12
123

1
12
123
1234
12345
```

## Pattern 4

![pattern 4](assets/pattern%204.png)

`input.txt`

```txt
2
3
5
```

`demo.cpp`

```cpp
#include <iostream>

using namespace std;

void printPattern(int a);

int main()
{
    int testCases;
    cin >> testCases;

    for (int i = 0; i < testCases; i++)
    {
        int x;
        cin >> x;
        printPattern(x);
        cout << '\n';
    }
}

void printPattern(int a)
{
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << i+1;
        }
        cout << "\n";
    }
}
```

`output.txt`

```txt
1
22
333

1
22
333
4444
55555
```

## Pattern 5

![pattern 5](assets/pattern%205.png)

`input.txt`

```txt
2
3
5
```

`demo.cpp`

```cpp
#include <iostream>

using namespace std;

void printPattern(int a);

int main()
{
    int testCases;
    cin >> testCases;

    for (int i = 0; i < testCases; i++)
    {
        int x;
        cin >> x;
        printPattern(x);
        cout << '\n';
    }
}

void printPattern(int a)
{
    for (int i = a; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            cout << '*';
        }
        cout << "\n";
    }
}
```

`output.txt`

```txt
***
**
*

*****
****
***
**
*
```

## Pattern 6

![pattern 6](assets/pattern%206.png)

`input.txt`

```txt
2
3
5
```

`demo.cpp`

```cpp
#include <iostream>

using namespace std;

void printPattern(int a);

int main()
{
    int testCases;
    cin >> testCases;

    for (int i = 0; i < testCases; i++)
    {
        int x;
        cin >> x;
        printPattern(x);
        cout << '\n';
    }
}

void printPattern(int a)
{
    for (int i = a; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            cout << j + 1;
        }
        cout << "\n";
    }
}
```

`output.txt`

```txt
123
12
1

12345
1234
123
12
1
```

## Pattern 7

![pattern 7](assets/pattern%207.png)

`input.txt`

```txt
2
3
5
```

`demo.cpp`

```cpp
#include <iostream>

using namespace std;

void printPattern(int a);

int main()
{
    int testCases;
    cin >> testCases;

    for (int i = 0; i < testCases; i++)
    {
        int x;
        cin >> x;
        printPattern(x);
        cout << '\n';
    }
}

void printPattern(int a)
{
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a - i - 1; j++)
        {
            cout << ' ';
        }
        for (int k = 0; k < 2 * i + 1; k++)
        {
            cout << '*';
        }
        for (int l = 0; l < a - i - 1; l++)
        {
            cout << ' ';
        }
        cout << "\n";
    }
}
```

`ouput.txt`

```txt
  *
 ***
*****

    *
   ***
  *****
 *******
*********
```

## Pattern 8

![pattern 8](assets/pattern%208.png)

`input.txt`

```txt
2
3
5
```

`demo.cpp`

```cpp
#include <iostream>

using namespace std;

void printPattern(int a);

int main()
{
    int testCases;
    cin >> testCases;

    for (int i = 0; i < testCases; i++)
    {
        int x;
        cin >> x;
        printPattern(x);
        cout << '\n';
    }
}

void printPattern(int a)
{
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout <<  ' ';
        }
        for (int k = 0; k < 2 * a - (2 * i + 1); k++)
        {
            cout << '*';
        }
        for (int l = 0; l < i; l++)
        {
            cout << ' ';
        }
        cout << '\n';
    }
}
```

`output.txt`

```txt
*****
 ***
  *

*********
 *******
  *****
   ***
    *
```

## Pattern 9

![pattern 9](assets/pattern%209.png)

`input.txt`

```txt
2
3
5
```

`demo.cpp`

```cpp
#include <iostream>

using namespace std;

void printPatternUp(int a);
void printPatternDown(int a);

int main()
{
    int testCases;
    cin >> testCases;

    for (int i = 0; i < testCases; i++)
    {
        int x;
        cin >> x;
        printPatternUp(x);
        printPatternDown(x);
        cout << '\n';
    }
}

void printPatternDown(int a)
{
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << ' ';
        }
        for (int k = 0; k < 2 * a - (2 * i + 1); k++)
        {
            cout << '*';
        }
        for (int l = 0; l < i; l++)
        {
            cout << ' ';
        }
        cout << '\n';
    }
}

void printPatternUp(int a)
{
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a - i - 1; j++)
        {
            cout << ' ';
        }
        for (int k = 0; k < 2 * i + 1; k++)
        {
            cout << '*';
        }
        for (int l = 0; l < a - i - 1; l++)
        {
            cout << ' ';
        }
        cout << "\n";
    }
}
```

`output.txt`

```txt
  *
 ***
*****
*****
 ***
  *

    *
   ***
  *****
 *******
*********
*********
 *******
  *****
   ***
    *
```

## Pattern 10

![pattern 10](assets/pattern%2010.png)

`input.txt`

```txt
1
5
```

`demo.cpp`

```cpp
#include <iostream>

using namespace std;

void printPattern(int a);

int main()
{
    int testCases;
    cin >> testCases;

    for (int i = 0; i < testCases; i++)
    {
        int x;
        cin >> x;
        printPattern(x);
        cout << '\n';
    }
}

void printPattern(int a)
{
    for (int i = 0; i < 2 * a - 1; i++)
    {
        int stars = 0;
        if (i >= a)
        {
            stars = 2 * a - (i+1);
        }
        else
        {
            stars = i + 1;
        }
        for (int j = 0; j < stars; j++)
        {
            cout << '*';
        }

        cout << '\n';
    }
}
```

`output.txt`

```txt
*
**
***
****
*****
****
***
**
*
```

## Pattern 11

![pattern 11](assets/pattern%2011.png)

`input.txt`

```txt
1
5
```

`demo.cpp`

```cpp
#include <iostream>

using namespace std;

void printPattern(int a);

int main()
{
    int testCases;
    cin >> testCases;

    for (int i = 0; i < testCases; i++)
    {
        int x;
        cin >> x;
        printPattern(x);
        cout << '\n';
    }
}

void printPattern(int a)
{
    int start;
    for (int i = 1; i <= a; i++)
    {
        if (i % 2 == 0)
            start = 0;
        else
            start = 1;

        for (int j = 1; j <= i; j++)
        {
            cout << start;
            start = 1 - start;
        }
        cout << endl;
    }
}
```

`output.txt`

```txt
1
01
101
0101
10101
```

## Pattern 12

![pattern 12](assets/pattern%2012.png)

`input.txt`

```txt
1
4
```

`demo.cpp`

```cpp
#include <iostream>
#include <map>

using namespace std;

void printPattern(int n);

int main()
{
    int testCases;
    cin >> testCases;

    for (int i = 0; i < testCases; i++)
    {
        int x;
        cin >> x;
        printPattern(x);
        cout << '\n';
    }
}

void printPattern(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        for (int k = 1; k <= n - i; k++)
        {
            cout << ' ';
        }
        for (int k = 1; k <= n - i; k++)
        {
            cout << ' ';
        }
        for (int j = i; j >= 1; j--)
        {
            cout << j;
        }
        cout << endl;
    }
}
```

`output.txt`

```txt
1      1
12    21
123  321
12344321
```

## Pattern 13

![pattern 13](assets/pattern%2013.png)

`input.txt`

```txt
1
5
```

`demo.cpp`

```cpp
#include <iostream>
#include <map>

using namespace std;

void printPattern(int n);

int main()
{
    int testCases;
    cin >> testCases;

    for (int i = 0; i < testCases; i++)
    {
        int x;
        cin >> x;
        printPattern(x);
        cout << '\n';
    }
}

void printPattern(int n)
{
    int start = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << start << " ";
            start++;
        }
        for (int k = 1; k <= n - i; k++)
        {
            cout << ' ';
        }
        cout << endl;
    }
}
```

`output.txt`

```txt
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15
```

## Pattern 14

![pattern 14](assets/pattern%2014.png)

`input.txt`

```txt
1
5
```

`demo.cpp`

```cpp
#include <iostream>
#include <map>

using namespace std;

void printPattern(int n);

int main()
{
    int testCases;
    cin >> testCases;

    for (int i = 0; i < testCases; i++)
    {
        int x;
        cin >> x;
        printPattern(x);
        cout << '\n';
    }
}

void printPattern(int n)
{
    char start = 'A';
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << start << " ";
            start++;
        }
        for (int k = 1; k <= n - i; k++)
        {
            cout << ' ';
        }
        cout << endl;
        start = 'A';
    }
}
```

`output.txt`

```txt
A
A B
A B C
A B C D
A B C D E
```

## Pattern 15

![pattern 15](assets/pattern%2015.png)

`input.txt`

```txt
1
5
```

`demo.cpp`

```cpp
#include <iostream>
#include <map>

using namespace std;

void printPattern(int n);

int main()
{
    int testCases;
    cin >> testCases;

    for (int i = 0; i < testCases; i++)
    {
        int x;
        cin >> x;
        printPattern(x);
        cout << '\n';
    }
}

void printPattern(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (char k = 'A'; k <= 'A' + (n - i); k++)
        {
            cout << k;
        }
        for (int j = 1; j < i; j++)
        {
            cout << ' ';
        }
        cout << endl;
    }
}
```

`output.txt`

```txt
ABCDE
ABCD
ABC
AB
A
```

## Pattern 16

![pattern 16](assets/pattern%2016.png)

`input.txt`

```txt
1
5
```

`demo.cpp`

```cpp
#include <iostream>
#include <map>

using namespace std;

void printPattern(int n);

int main()
{
    int testCases;
    cin >> testCases;

    for (int i = 0; i < testCases; i++)
    {
        int x;
        cin >> x;
        printPattern(x);
        cout << '\n';
    }
}

void printPattern(int n)
{
    char start = 'A';
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << start;
        }
        start++;
        cout << endl;
    }
}
```

`output.txt`

```txt
A
BB
CCC
DDDD
EEEEE
```

## Pattern 17

![pattern 17](assets/pattern%2017.png)

`input.txt`

```txt
1
5
```

`demo.cpp`

```cpp
#include <iostream>
#include <map>

using namespace std;

void printPattern(int n);

int main()
{
    int testCases;
    cin >> testCases;

    for (int i = 0; i < testCases; i++)
    {
        int x;
        cin >> x;
        printPattern(x);
        cout << '\n';
    }
}

void printPattern(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        char ch = '@';
        for (int k = 0; k < 2 * i + 1; k++)
        {
            if (k <= (2 * i + 1) / 2)
            {
                ch++;
            }
            else
            {
                ch--;
            }
            cout << ch;
        }
        for (int l = 0; l < n - i - 1; l++)
        {
            cout << ' ';
        }
        cout << "\n";
    }
}
```

`output.txt`

```txt
    A
   ABA
  ABCBA
 ABCDCBA
ABCDEDCBA
```

## Pattern 18

![pattern 18](assets/pattern%2018.png)

`input.txt`

```txt
1
5
```

`demo.cpp`

```cpp
#include <iostream>
#include <map>

using namespace std;

void printPattern(int n);

int main()
{
    int testCases;
    cin >> testCases;

    for (int i = 0; i < testCases; i++)
    {
        int x;
        cin >> x;
        printPattern(x);
        cout << '\n';
    }
}

void printPattern(int n)
{
    for (int i = 0; i < n; i++)
    {
        char cha = 'E';
        cha -= i;
        for (int j = 0; j < i + 1; j++)
        {
            cout << cha;
            cha++;
        }
        for (int k = 0; k < n - (i + 1); k++)
        {
            cout << ' ';
        }
        cout << endl;
    }
}
```

`output.txt`

```txt
E
DE
CDE
BCDE
ABCDE
```

## Pattern 19

![pattern 19](assets/pattern%2019.png)

`input.txt`

```txt
1
5
```

`demo.cpp`

```cpp
#include <iostream>
#include <map>

using namespace std;

void printPatternUp(int n);
void printPatternDown(int n);

int main()
{
    int testCases;
    cin >> testCases;

    for (int i = 0; i < testCases; i++)
    {
        int x;
        cin >> x;
        printPatternUp(x);
        printPatternDown(x);
        cout << '\n';
    }
}

void printPatternUp(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            cout << '*';
        }
        for (int k = 0; k < 2 * i; k++)
        {
            cout << ' ';
        }
        for (int j = 0; j < n - i; j++)
        {
            cout << '*';
        }
        cout << endl;
    }
}

void printPatternDown(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int k = 1; k <= i; k++)
        {
            cout << '*';
        }
        for (int l = 1; l <= 2 * n - 2 * i; l++)
        {
            cout << ' ';
        }
        for (int k = 1; k <= i; k++)
        {
            cout << '*';
        }
        cout << endl;
    }
}
```

`output.txt`

```txt
**********
****  ****
***    ***
**      **
*        *
*        *
**      **
***    ***
****  ****
**********
```

## Pattern 20

![pattern 20](assets/pattern%2020.png)

`input.txt`

```txt
1
5
```

`demo.cpp`

```cpp
#include <iostream>
#include <map>

using namespace std;

void printPattern(int n);

int main()
{
    int testCases;
    cin >> testCases;

    for (int i = 0; i < testCases; i++)
    {
        int x;
        cin >> x;
        printPattern(x);
        cout << '\n';
    }
}

void printPattern(int n)
{
    for (int i = 0; i < 2 * n - 1; i++)
    {
        int stars = 0;
        int spaces = 0;
        if (i >= n)
        {
            stars = 2 * n - (i + 1);
            spaces = 2 * i - n - 2;
        }
        else
        {
            stars = i + 1;
            spaces = 2 * n - 2 * i -1;
        }

        for (int j = 0; j < stars; j++)
        {
            cout << '*';
        }
        for (int k = 1; k < spaces; k++)
        {
            cout << ' ';
        }
        for (int j = 0; j < stars; j++)
        {
            cout << '*';
        }
        cout << endl;
    }
}
```

`output.txt`

```txt
*        *
**      **
***    ***
****  ****
**********
****  ****
***    ***
**      **
*        *
```

## Pattern 21

![pattern 21](assets/pattern%2021.png)

`input.txt`

```txt
1
5
```

`demo.cpp`

```cpp
#include <iostream>
#include <map>

using namespace std;

void printPattern(int n);

int main()
{
    int testCases;
    cin >> testCases;

    for (int i = 0; i < testCases; i++)
    {
        int x;
        cin >> x;
        printPattern(x);
        cout << '\n';
    }
}

void printPattern(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == 0 || j == 0 || i == n - 1 || j == n - 1)
            {
                cout << '*';
            }
            else
            {
                cout << ' ';
            }
        }
        cout << endl;
    }
}
```

`output.txt`

```txt
*****
*   *
*   *
*   *
*****
```

## Pattern 22

![pattern 22](assets/pattern%2022.png)

`input.txt`

```txt
1
4
```

`demo.cpp`

```cpp
#include <iostream>
#include <map>

using namespace std;

void printPattern(int n);

int main()
{
    int testCases;
    cin >> testCases;

    for (int i = 0; i < testCases; i++)
    {
        int x;
        cin >> x;
        printPattern(x);
        cout << '\n';
    }
}

void printPattern(int n)
{
    for (int i = 0; i < 2 * n - 1; i++)
    {
        for (int j = 0; j < 2 * n - 1; j++)
        {
            int top = i;
            int left = j;
            int right = (2 * n - 2) - j;
            int bottom = (2 * n - 2) - i;

            cout << (n - min(min(top, bottom), min(left, right)));
        }
        cout << endl;
    }
}
```

`output.txt`

```txt
4444444
4333334
4322234
4321234
4322234
4333334
4444444
```
