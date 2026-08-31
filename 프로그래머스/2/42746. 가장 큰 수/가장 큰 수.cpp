#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(const string& a, const string& b)
{
    return a + b > b + a;
}

string solution(vector<int> numbers)
{
    string answer = "";

    vector<string> arr;

    for(int i = 0; i < numbers.size(); i++)
    {
        arr.push_back(to_string(numbers[i]));
    }

    sort(arr.begin(), arr.end(), compare);

    for(string str : arr)
    {
        answer += str;
    }

    if(answer[0] == '0')
    {
        answer = "0";
    }


    return answer;
}