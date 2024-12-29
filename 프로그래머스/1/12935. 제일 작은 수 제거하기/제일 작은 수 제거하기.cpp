#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    
    if(arr.size() == 1)
    {
        answer.push_back(-1);
    }
    else
    {
        int temp = arr[0];
        int targetIdx = 0;        

        for(int i = 0; i < arr.size(); i++)
        {
            if(arr[i] < temp)
            {
                temp = arr[i];
                targetIdx = i;
            }
        }
        
        for(int i = 0; i < arr.size(); i++)
        {
            if(i == targetIdx) continue;
            
            answer.push_back(arr[i]);
        }
    }
    
    return answer;
}