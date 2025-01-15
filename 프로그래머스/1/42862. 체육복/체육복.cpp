#include <string>
#include <vector>

using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    int answer = 0;
    vector<int> temp(n, 1);
    
    for(int num : lost)
    {
        temp[num - 1]--;
    }
    
    for(int num : reserve)
    {
        temp[num - 1]++;
    }
    
    for(int i = 0; i < temp.size(); i++)
    {
        if(temp[i] == 0)
        {
            if(i - 1 >= 0)
            {
                if(temp[i - 1] == 2)
                {
                    temp[i]++;
                    temp[i - 1]--;
                    continue;
                }
            }
            
            if(i + 1 <= temp.size() - 1)
            {
                if(temp[i + 1] == 2)
                {
                    temp[i]++;
                    temp[i + 1]--;
                }
            }
        }
    }
    
    for(int num : temp)
    {
        if(num >= 1){
            answer++;
        }
    }
    
    return answer;
}