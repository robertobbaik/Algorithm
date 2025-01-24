#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

vector<string> solution(vector<string> players, vector<string> callings) {
    vector<string> answer;
    
        unordered_map<string, int> tempMap;
    unordered_map<int, string> tempMap2;
    
      for (int i = 0; i < players.size(); ++i)
    {
        tempMap[players[i]] = i;
        tempMap2[i] = players[i];
    }


    for (int i = 0; i < callings.size(); ++i)
    {
        int cur = tempMap[callings[i]];
        tempMap[callings[i]] -= 1;
        string temp = tempMap2[cur - 1]; 
        tempMap[temp] = cur;
        
        tempMap2[cur] = temp;
        tempMap2[cur - 1] = callings[i];
    }

    for (int i = 0; i < tempMap.size(); ++i)
    {
        answer.push_back(tempMap2[i]);
    }
    
    
    return answer;
}