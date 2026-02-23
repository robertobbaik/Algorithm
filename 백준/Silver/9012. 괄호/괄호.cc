#include <string>
#include <stack>
#include <iostream>

using namespace std;

int main(void)
{
    int T;
    cin >> T;

    while (T--)
    {
        string ps;
        cin >> ps;

        stack<char> s;
        bool isPair = true;

        for (char c : ps)
        {
            if (c == '(')
            {
                s.push(c);
            }
            else // c == ')'
            {
                if (!s.empty())
                {
                    s.pop();
                }
                else
                {
                    isPair = false;
                    break;
                }
            }
        }

        if (!s.empty()) isPair = false;

        cout << (isPair ? "YES" : "NO") << '\n';
    }

    return 0;
}