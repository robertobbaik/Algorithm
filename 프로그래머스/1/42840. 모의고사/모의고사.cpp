#include <string>
#include <vector>

#include <algorithm>

using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    vector<int> scores(3, 0);
    
    vector<vector<int>> temp = {{1,2,3,4,5}, {2,1,2,3,2,4,2,5}, {3,3,1,1,2,2,4,4,5,5}}; 
    
    for(int i = 0; i < answers.size(); i++)
    {
        if(answers[i] == temp[0][i % 5])
        {
            scores[0]++;
        }
        
        if(answers[i] == temp[1][i % 8])
        {
            scores[1]++;
        }
        
        if(answers[i] == temp[2][i % 10])
        {
            scores[2]++;
        }
    }
    
    int maxScore = *max_element(scores.begin(), scores.end());
    
    for(int i = 0; i < scores.size(); i++)
    {
        if(scores[i] == maxScore)
        {
            answer.push_back(i + 1);
        }
    }
        
    return answer;
}