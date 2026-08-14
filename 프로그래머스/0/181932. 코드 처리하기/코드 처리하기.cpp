#include <string>
#include <vector>

using namespace std;

string solution(string code)
{
    string answer = "";

    bool mode = false;

    for (int i = 0; i < code.size(); i++)
    {
        if (!mode)
        {
            if (isdigit(code[i]))
            {
                mode = !mode;
            }
            else
            {
                if (i == 0 || i % 2 == 0)
                {
                    answer += code[i];
                }
            }
        }
        else
        {
            if (isdigit(code[i]))
            {
                mode = !mode;
            }
            else
            {
                if (i % 2 == 1)
                {
                    answer += code[i];
                }
            }
        }
    }

    if (answer == "")
    {
        answer = "EMPTY";
    }
    return answer;
}