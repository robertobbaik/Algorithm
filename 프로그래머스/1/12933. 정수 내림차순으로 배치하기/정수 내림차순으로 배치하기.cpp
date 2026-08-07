#include <string>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

long long solution(long long n)
{
    long long answer = 0;

    string str = to_string(n);

    sort(str.rbegin(), str.rend());

    answer = stoll(str);

    return answer;
}