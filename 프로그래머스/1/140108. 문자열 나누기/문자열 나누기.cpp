#include <string>
#include <vector>

using namespace std;

int solution(string s)
{
    int answer = 0;

    int len = 0;
    int diff = 0;
    char prev = ' ';
    for (char c : s)
    {
        if (prev == ' ')
        {
            prev = c;
            len = 1;

            answer++;
        }
        else if (prev == c)
        {
            len++;
        }
        else
        {
            diff++;
            if (len == diff)
            {
                len = 0;
                diff = 0;
                prev = ' ';
            }
        }
    }
    return answer;
}