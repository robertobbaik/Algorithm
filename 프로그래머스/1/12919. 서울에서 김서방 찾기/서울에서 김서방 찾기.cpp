#include <string>
#include <vector>

using namespace std;

string solution(vector<string> seoul) {
    int idx = 0;
    for(int i = 0; i < seoul.size(); i++)
    {
        if(seoul[i] == "Kim"){
           idx = i;
            break;
        }
            
    }
    
    string temp = to_string(idx);
    
    string answer = "김서방은 " + temp +"에 있다";
    return answer;
}