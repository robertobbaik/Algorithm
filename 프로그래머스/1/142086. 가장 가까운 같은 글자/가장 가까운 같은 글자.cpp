#include <string>
#include <vector>

using namespace std;

int max(int a, int b)
{
    int result = a > b ? a : b;
    
    return result;        
}

vector<int> solution(string s) {
    vector<int> answer;
    
    for(int i = 0; i < s.size(); i++)
    {
        bool isFound = false;
        int temp = i + 1;  
   
            for(int j = 0; j < i; j++)
            {
                if(s[i] == s[j])
                {
                    temp = temp > i - j ? i - j : temp;
                    isFound = true;
                }
            } 
        
        temp = isFound ? temp : -1;
        answer.push_back(temp);
    }
    
    return answer;
}