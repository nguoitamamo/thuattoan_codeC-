#include <iostream>
#include <stack>
#include <algorithm>
#include <vector>

int main()
{

    int n;
    std::cin >> n;
    int *a = new int[n];
    int ans = -1;
    std::vector<int> v;

    for (int i = 0; i < n; i++)
        std::cin >> a[i];
    std::stack<int> st;

    int i = 0;
    while (i < n)
    {
        if (st.empty() || a[i] > a[st.top()])
        {
            st.push(i);
            i++;
        }
        else
        {
            int idx = st.top();
            st.pop();
            if (st.empty())
                ans = std::max(ans, a[idx] * i);
            else
                ans = std::max(ans, a[idx] * (i - st.top() - 1));
            v.push_back(ans);
        }
    }

    while (!st.empty())
    {
        int idx = st.top();
        st.pop();
        if (st.empty())
            ans = std::max(ans, a[idx] * i);
        else
            ans = std::max(ans, a[idx] * (i - st.top() - 1));

        v.push_back(ans);
    }
    for (auto &x : v)
    {
        std::cout << x << ' ';
    }
    std::cout << "\n"
              << ans << "\n";
    return 0;
}
