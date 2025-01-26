#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    vector<int> temp(3, 0);

    vector<int> a = {1, 2, 3, 4, 5};
    vector<int> b = {2, 1, 2, 3, 2, 4, 2, 5};
    vector<int> c = {3, 3, 1, 1, 2, 2, 4, 4, 5, 5};

    for (int i = 0; i < answers.size(); i++)
    {
        if(a[i % a.size()] == answers[i])
        {
            ++temp[0];
        }

        if(b[i % b.size()] == answers[i])
        {
            ++temp[1];
        }

        if(c[i % c.size()] == answers[i])
        {
            ++temp[2];
        }
    }

    int max = *max_element(temp.begin(), temp.end());

    for(int i = 0; i < temp.size(); ++i)
    {
        if(temp[i] == max)
        {
            answer.push_back(i + 1);
        }
    }
    return answer;
}