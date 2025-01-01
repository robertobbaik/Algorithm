#include <string>
#include <vector>

using namespace std;

string solution(string s, int n) {
    string answer = "";
    
    for(char c : s)
    {
        if(isalpha(c))
        {
            char base = islower(c) ? 'a' : 'A';
            answer += (c - base + n) % 26 + base;
        }
        else{
            answer += c;
        }
    }
    
    return answer;
}