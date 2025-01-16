#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> keymap, vector<string> targets) {
    vector<int> answer;
    
    for(int i = 0; i < targets.size(); i++)
    {
        int temp = 0;
        for(int j = 0; j < targets[i].size(); j++)
        {
            int min = 101;
            
            for(int k = 0; k < keymap.size(); k++)
            {
                for(int l = 0; l < keymap[k].size(); l++)
                {
                    if(targets[i][j] == keymap[k][l])
                    {
                        if(l + 1 < min)
                        {
                            min = l + 1;
                        }
                    }
                }
            }
            
            if(min == 101)
            {
                temp = -1;
                break;
            }
            else
            {
                temp += min;
            }
        }
        answer.push_back(temp);
    }
    
    return answer;
}