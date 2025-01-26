#include <string>
#include <vector>

using namespace std;

vector<int> solution(string s) {
        vector<int> answer;
    string temp = "";
    int changeCount = 0;
    int deleteZerocount = 0;
    while (true)
    {
        ++changeCount;
        for (char c : s)
        {
            if (c == '1')
            {
                temp += c;
            }
            else
            {
                ++deleteZerocount;
            }
        }

        int b = temp.size();

        temp.clear();

        while (b)
        {
            temp += to_string(b % 2);
            b /= 2;
        }

        s = temp;

        if (temp == "1")
        {
            break;
        }
        temp.clear();
    }

    answer.push_back(changeCount);
    answer.push_back(deleteZerocount);
    return answer;
}