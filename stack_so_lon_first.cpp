#include <iostream>
#include <stack>

int main()
{

    int n;
    std::cin >> n;
    int *a = new int[n];
    int *b = new int[n];

    for (int i = 0; i < n; i++)
        a[i] = rand() % 10;
    std::stack<int> st;
    for (int i = 0; i < n; i++)
    {
        if (st.empty())
            st.push(i);
        else
        {
            while (!st.empty() && a[i] > a[st.top()])
            {
                b[st.top()] = a[i];
                st.pop();
            }
            st.push(i);
        }
    }
    while (!st.empty())
    {
        b[st.top()] = -1;
        st.pop();
    }
    for (int i = 0; i < n; i++)
    {
        std::cout << a[i] << " ";
    }
    std::cout << "\n";
    for (int i = 0; i < n; i++)
    {
        std::cout << b[i] << " ";
    }
    std::cout << "\n";
    return 0;
}