#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> lottos, vector<int> win_nums) {
    vector<int> answer;
    
    int result = 0;
    int zero_count = 0;
    
    for(int i = 0; i < lottos.size(); i++)
    {
        if(lottos[i] == 0)
        {
            zero_count++;
            continue;
        }
        
        for(int j = 0; j < win_nums.size(); j++)
        {
            if(lottos[i] == win_nums[j])
            {
                result++;
                break;
            }
        }
    }
    
    int max = (result + zero_count) == 0 ? 6 : 7 - (result + zero_count); 
    int min = result == 0 ? 6 : 7 - result;
    
    answer.push_back(max);
    answer.push_back(min);
    
    return answer;
}