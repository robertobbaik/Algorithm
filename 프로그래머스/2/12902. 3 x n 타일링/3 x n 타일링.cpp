#include <string>
#include <vector>

using namespace std;

int solution(int n)
{
    int answer = 0;

    vector<long long> dp(n + 1);

    dp[2] = 3;
    dp[4] = 11;

    for(int i = 6; i < n + 1; i += 2)
    {
        dp[i] = (4 * dp[i - 2] - dp[i - 4] + 1000000007) % 1000000007;
    }

    answer = dp[n];

    return answer;
}