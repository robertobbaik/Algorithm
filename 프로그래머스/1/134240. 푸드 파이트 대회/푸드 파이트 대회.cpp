#include <string>
#include <vector>

using namespace std;

string solution(vector<int> food) {
    string answer = "";
    
    vector<int> temp;
    for(int i = 1; i < food.size(); i++)
    {    
       for(int j = 0; j < food[i] / 2; j++)
       {
            answer += to_string(i);     
       }
    }
    answer += "0";
    
    int len = answer.size();
    
    for(int i = len - 2; i >= 0; i--)
    {
        answer.push_back(answer[i]);
    }
    
    return answer;
}