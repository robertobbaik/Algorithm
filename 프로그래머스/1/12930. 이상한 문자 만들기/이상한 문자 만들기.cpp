#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    
    bool isStart = true;
    
    for(string::iterator iter = s.begin(); iter != s.end(); ++iter)
    {
        char temp = *iter;
        
        if(*iter == ' ')
        {
            isStart = true;
            answer += temp;
            continue;
        }
            
        temp = isStart ? toupper(temp) : tolower(temp);
        
        answer += temp;
        isStart = !isStart;
    }
    return answer;
}