#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

vector<int> solution(vector<string> keymap, vector<string> targets) {
    vector<int> answer;
    unordered_map<char, int> u_map;
    
    for(int i = 0; i < keymap.size(); ++i)
    {
        for(int j = 0; j < keymap[i].size(); ++j)
        {
            char c = keymap[i][j];
            if(u_map.find(c) == u_map.end() || j + 1 < u_map[c])
            {
                u_map[c] = j + 1;
            }
        }
    }

    for(string target : targets)
    {
        int totalNum = 0;
        bool isPossible = true;
        
        for(char c : target)
        {
            if(u_map.find(c) == u_map.end())
            {
                isPossible = false;
                break;
            }
            totalNum += u_map[c];
        }
        
        if(isPossible)
        {
            answer.push_back(totalNum);
        }else{
            answer.push_back(-1);
        }
    }
    
    
    
    return answer;
}