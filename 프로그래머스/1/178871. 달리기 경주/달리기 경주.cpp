#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

vector<string> solution(vector<string> players, vector<string> callings)
{
    vector<string> answer;

    unordered_map<string, int> um;

    for(int i = 0; i < players.size(); i++)
    {
        um[players[i]] = i;
    }

    for(string str : callings)
    {
        int idx = um[str];

        string temp = players[idx - 1];
        players[idx - 1] = str;
        players[idx] = temp;

        um[str]--;
        um[temp]++;
    }

    answer = players;
    return answer;
}