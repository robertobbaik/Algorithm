#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

string solution(string s) {
       vector<int> v;
    string answer;

    bool isNegative = false;
    string temp = "";
    for (int i = 0; i < s.size(); ++i)
    {
        if (s[i] == ' ')
        {
            int num = stoi(temp);
            if (isNegative)
            {
                num *= -1;
                isNegative = false;
            }

            v.push_back(num);
            temp = "";
        }
        else if (s[i] == '-')
        {
            isNegative = true;
        }
        else if (i == s.size() - 1)
        {   
            temp += s[i];
            int num = stoi(temp);
            if (isNegative)
            {
                num *= -1;
                isNegative = false;
            }

            v.push_back(num);
        }
        else
        {
            temp += s[i];
        }
    }

    int min = *min_element(v.begin(), v.end());
    int max = *max_element(v.begin(), v.end());

    answer = to_string(min) + " " + to_string(max);
    return answer;
}