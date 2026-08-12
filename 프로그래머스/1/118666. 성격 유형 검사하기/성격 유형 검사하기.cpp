#include <string>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

string solution(vector<string> survey, vector<int> choices)
{
    string answer = "";

    unordered_map<char, int> um;
    vector<string> group = {"RT", "CF", "JM", "AN"};

    for (int i = 0; i < survey.size(); i++)
    {
        int score = choices[i];

        if (score > 4)
        {
            um[survey[i][1]] += score - 4;
        }
        else if (score < 4)
        {
            um[survey[i][0]] += 4 - score;
        }
    }

    for(string s : group)
    {
        if(um[s[0]] == um[s[1]])
        {
            sort(s.begin(), s.end());
            answer += s[0];
        }
        else
        {
            char c = um[s[0]] > um[s[1]] ? s[0] : s[1];
            answer += c;
        }
    }

    return answer;
}