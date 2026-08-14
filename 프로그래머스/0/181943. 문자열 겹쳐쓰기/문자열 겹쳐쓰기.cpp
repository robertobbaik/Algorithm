#include <string>
#include <vector>
#include <string>
using namespace std;

string solution(string my_string, string overwrite_string, int s)
{
    string answer = "";

    string a = my_string.substr(0, s);
    string b = my_string.substr(s + overwrite_string.size(), my_string.size());
    answer = a + overwrite_string + b;
    return answer;
}