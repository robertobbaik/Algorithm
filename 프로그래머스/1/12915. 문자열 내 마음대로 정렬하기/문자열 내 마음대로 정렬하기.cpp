#include <string>
#include <vector>

using namespace std;

void swap(string& a, string& b)
{
    string temp = a;
    a = b;
    b = temp;
}

vector<string> solution(vector<string> strings, int n) {
    vector<string> answer;
    
    for(int i = 0; i < strings.size(); i++)
    {
        for(int j = i + 1; j < strings.size(); j++)
        {
            if(strings[i][n] > strings[j][n])
            {
                swap(strings[i], strings[j]);
            }
            else if(strings[i][n] == strings[j][n] && strings[i] > strings[j])
            {
                swap(strings[i], strings[j]);
            }
        }
    }
    
    return strings;
}