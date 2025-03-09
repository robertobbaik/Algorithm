#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(string a, string b)
{
    return a + b > b + a;
}

string solution(vector<int> numbers)
{
    string answer = "";

    vector<string> num_string;

    for(int num : numbers)
    {
        num_string.push_back(to_string(num));
    }

    sort(num_string.begin(), num_string.end(), compare);

    if(num_string[0][0] == '0')
    {
        return "0";
    } 

    for(string s : num_string)
    {
        answer += s;
    }

    return answer;
}