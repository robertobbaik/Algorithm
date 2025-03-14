#include <string>
#include <vector>
#include <stack>

using namespace std;
string solution(string number, int k)
{
    string answer = "";
    stack<char> s;

    int count = k;

    for(char c : number)
    {
        while(!s.empty() && s.top() < c && count > 0)
        {
            s.pop();
            count--;
        }
        s.push(c);
    }

    while(count > 0)
    {
        s.pop();
        count--;
    }

    while (!s.empty()) {
        answer = s.top() + answer;
        s.pop();
    }
    return answer;
}