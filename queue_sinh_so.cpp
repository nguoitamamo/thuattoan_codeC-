#include <iostream>
#include <queue>
#include <vector>
#include <string>

std::vector<std::string> v;
std::string ans[101];

void init()
{
    std::queue<std::string> qe;
    v.push_back("9");
    qe.push("9");

    while (1)
    {
        std::string top = qe.front();
        qe.pop();
        if (top.length() == 9)
            break;
        qe.push(top + "0");
        qe.push(top + "9");
        v.push_back(top + "0");
        v.push_back(top + "9");
    }
    int cnt = 0;

    for (int i = 1; i <= 100; i++)
    {
        for (auto &x : v)
        {
            if (std::stoll(x) % i == 0)
            {
                ans[i] = x;
                cnt++;
                break;
            }
        }
    }
    std::cout << cnt << "\n";
    for (int i = 1; i <= 100; i++)
    {
        std::cout << i << " " << ans[i] << "\n";
    }
}

int main()
{

    init();

    return 0;
}