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

![pattern 2](assets/pattern%203.png)

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

![pattern 2](assets/pattern%204.png)

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
