#include <iostream>

using namespace std;

void func(int N, int i);

int main()
{
    int N;
    cin >> N;
    func(N, 1);
}

void func(int N, int i)
{
    if (i > N)
    {
        return;
    }
    func(N, i + 1);
    cout << i << "\n";
}