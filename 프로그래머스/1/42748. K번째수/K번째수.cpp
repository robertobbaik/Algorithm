#include <string>
#include <vector>

using namespace std;

void bubblesort(vector<int>& a)
{
    for(int i = 0; i < a.size(); i++)
    {
        for(int j = i + 1; j < a.size(); j++)
        {
            if(a[i] > a[j])
            {
                swap(a[i], a[j]);
            }
        }
    }
}

void swap(int& a, int& b)
{
    int temp = a;
    a = b;
    b = temp;
}

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    
    for(int i = 0; i < commands.size(); i++)
    {
        vector<int> temp;
        
        for(int j = commands[i][0] - 1; j < commands[i][1]; j++)
        { 
            temp.push_back(array[j]);
        }
        
        bubblesort(temp);
        answer.push_back(temp[commands[i][2] - 1]);
    }
    
    return answer;
}