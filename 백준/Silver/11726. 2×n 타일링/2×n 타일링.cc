#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int n;
	cin >> n;

	vector<int> dp(n + 1);

	dp[1] = 1;

	if (n >= 2)
	{
		dp[2] = 2;
	}

	for (int i = 3; i < n + 1; i++)
	{
		dp[i] = (dp[i - 2] + dp[i - 1]) % 10007;
	}

	cout << dp[n] << endl;
	return 0;
}