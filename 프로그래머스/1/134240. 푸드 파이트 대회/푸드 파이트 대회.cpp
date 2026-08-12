#include <string>
#include <vector>
#include <stack>

using namespace std;

string solution(vector<int> food)
{
    string answer = "";
    stack<char> st;

    for(int i = 1; i < food.size(); i++)
    {
        for(int j = 0; j < food[i] / 2; j++)
        {
            answer += i + '0';
            st.push(i + '0');
        }
    }

    answer += '0';

    while(!st.empty())
    {
        answer += st.top();
        st.pop();
    }
    return answer;
}