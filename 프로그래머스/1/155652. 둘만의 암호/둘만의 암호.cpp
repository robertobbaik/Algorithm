#include <string>
#include <vector>
#include <unordered_set>

using namespace std;

string solution(string s, string skip, int index) {
    string answer = "";
       unordered_set<char> temp(skip.begin(), skip.end());

    for (char c : s)
    {
        int step = index;
        char current = c;

        while (step > 0)
        {
            current = current == 'z' ? current = 'a' : current + 1;
            if (temp.find(current) == temp.end())
            {
                --step;
            }
        }

        answer += current;
    }
    return answer;
}