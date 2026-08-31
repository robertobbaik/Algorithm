#include <string>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int solution(vector<int> priorities, int location)
{
    int answer = 0;

    queue<pair<int, int>> q;

    vector<int> arr;
    int index = 0;

    for (int i = 0; i < priorities.size(); i++)
    {
        arr.push_back(priorities[i]);
        q.push({priorities[i], i});
    }

    sort(arr.rbegin(), arr.rend());

    while (true)
    {
        auto [num, idx] = q.front();
        q.pop();

        if (arr[index] == num)
        {
            index++;
            answer++;
            if (idx == location)
            {
                return answer;
            }
        }
        else
        {
            q.push({num, idx});
        }
    }

    return answer;
}