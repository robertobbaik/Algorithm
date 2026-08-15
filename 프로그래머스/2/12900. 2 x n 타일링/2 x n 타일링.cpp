#include <string>
#include <vector>

using namespace std;

int solution(int n)
{
    int answer = 0;

    vector<int> dp(n + 1);

    dp[2] = 2;
    dp[3] = 3;
    dp[4] = 5;

    for(int i = 5; i < n + 1; i++)
    {
        dp[i] = (dp[i - 2] + dp[i - 1]) % 1000000007;
    }

    answer = dp[n];

    return answer;
}