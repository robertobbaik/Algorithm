#include <string>
#include <vector>

using namespace std;

string solution(vector<string> cards1, vector<string> cards2, vector<string> goal) {
    string answer = "Yes";
    
    vector<string> temp1;
    vector<string> temp2;
    for (int i = 0; i < goal.size(); i++)
    {
        for(int j = 0; j < cards1.size(); j++)
        {
            if(goal[i] == cards1[j])
            {
                temp1.push_back(goal[i]);
            }
        }

             for(int j = 0; j < cards2.size(); j++)
        {
            if(goal[i] == cards2[j])
            {
                temp2.push_back(goal[i]);
            }
        }
    }

    for(int i = 0; i < temp1.size(); i++)
    {
        if(cards1[i] != temp1[i])
        {
            answer = "No";
            break;
        }
    }

    
    for(int i = 0; i < temp2.size(); i++)
    {
        if(cards2[i] != temp2[i])
        {
            answer = "No";
            break;
        }
    }
    


    
    return answer;
}