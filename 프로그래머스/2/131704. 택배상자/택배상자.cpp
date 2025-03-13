#include <string>
#include <vector>
#include <queue>
#include <stack>

using namespace std;

int solution(vector<int> order)
{
    int answer = 0;

    queue<int> q;
    stack<int> s;

    for (int i = 0; i < order.size(); i++)
    {
        q.push(i + 1);
    }

    int targetIndex = 0;

    while (!q.empty() || !s.empty())
    {
        if (!s.empty() && s.top() == order[targetIndex])
        {
            answer++;
            targetIndex++;
            s.pop();
        }
        else if(!q.empty() && q.front() == order[targetIndex])
        {
            answer++;
            targetIndex++;
            q.pop();
        }
        else if (!q.empty())
        {
            int temp = q.front();
            q.pop();
            s.push(temp);

        }
        else
        {
            break;
        }
    }

    return answer;
}