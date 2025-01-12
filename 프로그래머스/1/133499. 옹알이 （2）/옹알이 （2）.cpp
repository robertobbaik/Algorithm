#include <string>
#include <vector>

using namespace std;

int solution(vector<string> babbling)
{
    int answer = 0;

    vector<string> possible = {"aya", "ye", "woo", "ma"};

    for (int i = 0; i < babbling.size(); i++)
    {
        int startPos = 0;
        int endPos = 0;
        int idx = 0;
        string bab = babbling[i];

        int prev = 5;
        while (idx < possible.size())
        {
            endPos = possible[idx].size();
            string temp = bab.substr(startPos, endPos);

            if (temp == possible[idx] && prev != idx)
            {
                prev = idx;

                if (startPos + endPos == bab.size())
                {
                    startPos += endPos;    
                    answer++;
                    break;
                }
                startPos += endPos;
                idx = 0;
            }
            else
            {
                idx++;
            }
        }
    }

    return answer;
}