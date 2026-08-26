#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

vector<int> solution(string msg)
{
    vector<int> answer;

    unordered_map<string, int> um;

    for(int i = 0; i < 26; i++)
    {
        char c = 'A' + i;
        string str;
        str += c;

        um[str] = i + 1;
    }

    string temp;

    for(char c : msg)
    {
        string next = temp + c;

        if(um.find(next) != um.end())
        {
            temp = next;
        }
        else
        {
            answer.push_back(um[temp]);

            um[next] = um.size() + 1;
            temp = "";
            temp += c;
        }
    }

    answer.push_back(um[temp]);

    return answer;
}