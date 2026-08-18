#include <string>
#include <vector>
#include <sstream>
#include <algorithm>
#include <climits>

using namespace std;

string solution(string s)
{
    string answer = "";

    stringstream ss(s);

    int min_num = INT_MAX;
    int max_num = INT_MIN;

    int num;

    while(ss >> num)
    {
        min_num = min(min_num, num);
        max_num = max(max_num, num);
    }

    answer = to_string(min_num) + " " + to_string(max_num);

    
    
    return answer;
}