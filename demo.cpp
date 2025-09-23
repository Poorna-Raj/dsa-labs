#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main()
{
    map<int, int> maps;

    maps.emplace(2, 10);
    maps.emplace(5, 50);
    maps.insert({1, 6});

    auto it = maps.find(5);
    cout << it->second << endl;
}