#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string X, string Y) {
    string answer = "";
    
    vector<int> countX(10, 0);
    vector<int> countY(10, 0);
    
    for(char num : X) countX[num - '0']++;
    for(char num : Y) countY[num - '0']++;
    
    for(int i = 9; i >= 0; i--)
    {
        int commonCount = min(countX[i], countY[i]);
        answer.append(commonCount, '0' + i);
    }
    
    if(answer[0] == '0')
    {
        answer = "0";
    }
    
    if(answer.empty())
    {
         answer = "-1";
    }
    
    
    return answer;
}