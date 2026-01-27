#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_set>

using namespace std;

bool compare(string &a, string &b)
{
	if (a.size() == b.size())
	{
		return a < b;
	}

	return a.size() < b.size();
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;

	vector<string> arr;
	unordered_set<string> us;

	for (int i = 0; i < N; i++)
	{
		string str;
		cin >> str;
		us.insert(str);
	}

	for (string str : us)
	{
		arr.push_back(str);
	}

	sort(arr.begin(), arr.end(), compare);

	for (string str : arr)
	{
		cout << str << "\n";
	}

	return 0;
}