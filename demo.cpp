#include <iostream>

using namespace std;

int count = 0;

void func()
{
    if (count == 2)
    {
        return;
    }
    cout << count << "\n";
    count++;
    func();
    cout << "After the func()" << "\n";
}

int main()
{
    func();
}