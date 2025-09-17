#include <iostream>

using namespace std;

int main()
{
    int i = 0;
    do
    {
        cout << i << "\n";
        i++;
    } while (i < 5);

    cout << "Value of i after the loop - " << i;
}