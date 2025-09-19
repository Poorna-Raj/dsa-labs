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