#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int gcd(int a, int b)
{
    while(b)
    {
        int r = a % b;
        a = b;
        b = r;
    }

    return a;
}

int lcm(int a, int b)
{
    return a * b / gcd(max(a, b), min(a, b));
}

int solution(vector<int> arr)
{
    int answer = 0;

    sort(arr.rbegin(), arr.rend());

    vector<int> dp(arr.size());

    dp[0] = arr[0];

    for(int i = 1; i < arr.size(); i++)
    {
        dp[i] = lcm(dp[i-1], arr[i]);
    }

    answer = dp[arr.size() - 1];

    return answer;
}