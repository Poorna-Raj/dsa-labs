#include <iostream>

using namespace std;

int func(int N);

int main()
{
    int N;
    cin >> N;
    cout << func(N) << "\n";
}

int func(int N)
{
    if (N == 0)
    {
        return 0;
    }
    else
    {
        return N + func(N - 1);
    }
}