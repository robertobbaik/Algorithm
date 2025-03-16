#include <string>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

bool compare(vector<int> a , vector<int> b)
{
    if(a[1] - a[0] == b[1] - b[0]) return a[0] < b[0];
    return a[1] - a[0] < b[1] - b[0];
}

vector<int> solution(vector<int> sequence, int k)
{
    vector<int> answer;
    queue<pair<int, int>> q;

    vector<vector<int>> answers;
    int num = 0;
    for (int i = 0; i < sequence.size(); ++i)
    {
        num += sequence[i];
        q.push({sequence[i], i});

        while (num > k)
        {
            num -= q.front().first;
            q.pop();
        }
        
        if (num == k)
        {
            vector<int> temp;
            num -= q.front().first;
            temp.push_back(q.front().second);
            temp.push_back(i);
            answers.push_back(temp);
            q.pop();
        }
    }

    sort(answers.begin(), answers.end(), compare);

    return answers[0];
}