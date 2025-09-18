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