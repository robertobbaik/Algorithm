#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = 0;
    
    vector<string> table = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    
    string a = "";
    string temp = "";
    
    for(char c : s)
    {
        if(isdigit(c))
        {
            a += c;
        }
        else
        {
            temp += c;
            for(int i = 0; i < table.size(); i++)
            {
                if(temp == table[i])
                {
                    a += to_string(i);
                    temp = "";
                    break;
                }
            }
        }
    }
    
    answer = stoi(a);
    
    return answer;
}