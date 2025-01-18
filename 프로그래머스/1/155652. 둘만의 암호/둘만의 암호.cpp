#include <string>
#include <vector>

using namespace std;

string solution(string s, string skip, int index) {
    string answer = "";

    for (char c : s)
    {
        int step = index;
        char current = c;

        while (step > 0)
        {
            current = current == 'z' ? current = 'a' : current + 1;
            if (skip.find(current) == string::npos)
            {
                --step;
            }
        }

        answer += current;
    }
    return answer;
}