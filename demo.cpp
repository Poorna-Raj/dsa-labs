#include <iostream>

using namespace std;

int main()
{
    int age;
    cin >> age;

    if (age <= 0)
    {
        cout << "Invalid age";
    }
    else if (age < 18)
    {
        cout << "You are not an adult!";
    }
    else
    {
        cout << "You are an adult.";
    }
}