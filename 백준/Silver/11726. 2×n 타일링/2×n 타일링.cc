// BOJ #11726 - 2×n 타일링
// https://www.acmicpc.net/problem/11726
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<int> dp(n + 1);

    dp[1] = 1;
    
    if(n >= 2)
    {
        dp[2] = 2;
    }

    for(int i = 3; i <= n; i++)
    {
        dp[i] = (dp[i - 2] + dp[i - 1]) % 10007;
    }

    cout << dp[n] << endl;

    return 0;
}
