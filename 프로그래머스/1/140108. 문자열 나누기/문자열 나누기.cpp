#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = 0;
    
    int sNum = 0;
    int tempNum = 0;
    int tempChar = '0';
    
    for(int i = 0; i < s.size(); i++)
    {
        if(tempChar == '0')
        {
            tempChar = s[i];
            sNum++;
        }
         else if(tempChar == s[i])
        {
            sNum++;
        }
        else if(tempChar != s[i])
        {
            tempNum++;
           
        }
        
         if(sNum == tempNum)
            {
                answer++;
                tempChar = '0';
                tempNum = 0;
                sNum = 0;
            }
      
    }
    
    if(tempChar != '0')
    {
        answer++;
    }
    
    
    return answer;
}