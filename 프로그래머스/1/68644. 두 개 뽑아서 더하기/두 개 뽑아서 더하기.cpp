#include <string>
#include <vector>

using namespace std;



vector<int> solution(vector<int> numbers) {
    vector<int> answer;
    
    for(int i = 0; i < numbers.size(); i++)
    {
        for(int j = i + 1; j < numbers.size(); j++)
        {
            int temp = numbers[i] + numbers[j];
            
            bool isFoundNum = false;
            
            for(int k = 0; k < answer.size(); k++)
            {
                if(answer[k] == temp)
                {
                    isFoundNum = true;
                    break;
                }
            }
            
            if(!isFoundNum)
                answer.push_back(temp);
        }
    }
    
    //vector<int> duplicateNum;
    
    for(int i = 0; i < answer.size(); i++)
    {
        for(int j = i + 1; j < answer.size(); j++)
        {
            if(answer[i] > answer[j])
            {
                int temp = answer[i];
                answer[i] = answer[j];
                answer[j] = temp;
            }
        }
    }

    return answer;
}