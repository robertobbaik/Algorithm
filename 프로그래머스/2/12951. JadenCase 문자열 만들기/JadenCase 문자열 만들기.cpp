#include <string>
#include <vector>

using namespace std;

string solution(string s) {
   string answer = "";
    bool isUppercase = true;

    for (int i = 0; i < s.size(); ++i)
    {
        if (s[i] == ' ')
        {
            isUppercase = true;
        }
        else if ((int)s[i] < 65)
        {
            isUppercase = false;
        }
        else if ((int)s[i] >= 65 && (int)s[i] < 97)
        {
            if(!isUppercase)
            {
                s[i] = (char)((int)s[i] + 32);
            }
            else
            {
                isUppercase = false;
            }
            
        }
        else if ((int)s[i] > 96 && isUppercase)
        {
            s[i] = (char)((int)s[i] - 32);
            isUppercase = false;
        }
    }
    answer = s;

    return answer;
}