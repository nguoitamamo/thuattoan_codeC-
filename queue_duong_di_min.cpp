#include <iostream>
#include <queue>
#include <set>

int init(int s, int t)
{
    std::queue<std::pair<int, int>> qe;
    std::set<int> se;
    qe.push({s, 0});
    se.insert(s);

    while (1)
    {
        std::pair<int, int> top = qe.front();
        qe.pop();
        if (top.first == t || top.first * 2 == t)
            return top.second;
        if (top.first - 1 == t || top.first * 2 == t)
            return top.second + 1;
        if (se.find(top.first * 2) == se.end() || top.first < t)
        {
            qe.push({top.first * 2, top.second + 1});
            se.insert(top.first * 2);
        }
        if (se.find(top.first - 1) == se.end() || top.first > 1)
        {
            qe.push({top.first - 1, top.second + 1});
            se.insert(top.first - 1);
        }
    }
}

int main()
{
    std::cout << init(2, 5);
    return 0;
}