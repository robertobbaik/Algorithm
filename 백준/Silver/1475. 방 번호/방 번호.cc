#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

int main()
{
	int N;
	cin >> N;

	vector<int> arr(10, 0);

	while (N)
	{
		int remainder = N % 10;
		arr[remainder]++;
		N /= 10;
	}

	int maxNum = (arr[6] + arr[9] + 1) / 2;

	for (int i = 0; i < 10; i++)
	{
		if (i == 6 || i == 9)
			continue;

		maxNum = max(maxNum, arr[i]);
	}

	cout << maxNum << endl;

	return 0;
}