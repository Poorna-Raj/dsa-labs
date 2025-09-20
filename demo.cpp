#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int main()
{
    priority_queue<int, vector<int>, greater<int>> que;

    que.push(4);
    que.push(10);
    que.push(6);
    que.emplace(4);

    cout << "Top is -> " << que.top() << endl;
}