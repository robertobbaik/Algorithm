#include <iostream>
#include <vector>

using namespace std;

bool compare(const pair<int, int>& a, const pair<int, int>& b)
{
	if(a.first > b.first && a.second > b.second)
	{
		return true;
	}

	return false;
}

int main()
{
	int N;
	cin >> N;
	vector<pair<int, int>> v(N);
	vector<int> arr(N, 0);

	for(int i = 0; i < N; i++)
	{
		int a, b;
		cin >> a >> b;

		v[i] = make_pair(a, b);
	}

	for(int i = 0; i < N; i++)
	{
		int value = 1;
		for(int j = 0; j < N; j++)
		{
			if(i == j) continue;
			if(compare(v[j], v[i]))
			{
				value++;
			}
		}

		arr[i] = value;
	}

	for(int n : arr)
	{
		cout << n << " ";
	}


	return 0;
}