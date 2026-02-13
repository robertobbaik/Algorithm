#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N, K;

	cin >> N >> K;

	vector<int> coins(N);

	for(int i = 0; i < N; i++)
	{
		cin >> coins[i];
	}

	sort(coins.rbegin(), coins.rend());

	int coincount = 0;

	for(int i = 0; i < N; i++)
	{
		if(K == 0) break;

		coincount += (K / coins[i]);
		K %= coins[i];
	}
 

	cout << coincount << "\n";


	return 0;
}