#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    
    bool isStart = true;
    
    for(string::iterator iter = s.begin(); iter != s.end(); ++iter)
    {
        char temp = *iter;
        
        if(isStart)
        {
            temp = toupper(temp);
        }else{
            temp = tolower(temp);
        }
        
        answer += temp;
        
        isStart = !isStart;
        if(*iter == ' ')
            isStart = true;
        
    }
    return answer;
}