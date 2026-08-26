#include <string>
#include <vector>
#include <algorithm>
#include <cctype>

using namespace std;

vector<string> split(const string &str)
{
    vector<string> result;

    string head;
    string number;
    string tail;

    int index = 0;

    while (index < str.size() && !isdigit(str[index]))
    {
        head += tolower(str[index]);
        index++;
    }

    while (index < str.size() &&
           isdigit(str[index]) &&
           number.size() < 5)
    {
        number += str[index];
        index++;
    }

    while (index < str.size())
    {
        tail += str[index];
        index++;
    }

    result.push_back(head);
    result.push_back(number);
    result.push_back(tail);

    return result;
}

bool compare(const string &a, const string &b)
{
    vector<string> aa = split(a);
    vector<string> ab = split(b);
    if (aa[0] == ab[0])
    {
        return stoi(aa[1]) < stoi(ab[1]);
    }

    return aa[0] < ab[0];
}

vector<string> solution(vector<string> files)
{
    // HEAD와 NUMBER가 같으면 기존 순서를 유지
    stable_sort(files.begin(), files.end(), compare);

    return files;
}