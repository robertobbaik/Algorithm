#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int N, M;

	cin >> N >> M;

	vector<int> arr(N);

	for(int i = 0; i < N; i++)
	{
		cin >> arr[i];
	}

	int maxNum = 0;

	for(int i = 0; i < N; i++)
	{
		for(int j = i + 1; j < N; j++)
		{
			for(int k = j + 1; k < N; k++)
			{
				int num = arr[i] + arr[j] + arr[k];

				if(num > M)
				{
					continue;
				}
				else
				{
					maxNum = max(maxNum, num);
				}
			}
		}
	}

	cout << maxNum << endl;


	return 0;
}