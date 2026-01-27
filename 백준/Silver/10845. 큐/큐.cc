#include <iostream>
#include <queue>

using namespace std;

int main()
{
	int N;
	cin >> N;
	queue<int> q;
	
	for (int i = 0; i < N; i++)
	{
		string str;
		cin >> str;

		if (str == "push")
		{
			int n;
			cin >> n;

			q.push(n);
		}
		else if (str == "pop")
		{
			if (!q.empty())
			{
				int n = q.front();
				q.pop();

				cout << n << '\n';
			}
			else
			{
				cout << -1 << '\n';
			}
		}
		else if (str == "size")
		{
			cout << q.size() << '\n';
		}
		else if (str == "empty")
		{
			if (!q.empty())
			{
				cout << 0 << '\n';
			}
			else
			{
				cout << 1 << '\n';
			}
		}
		else if (str == "front")
		{
			if (!q.empty())
			{
				cout << q.front() << '\n';
			}
			else
			{
				cout << -1 << '\n';
			}
		}
		else if (str == "back")
		{
			if (!q.empty())
			{
				cout << q.back() << '\n';
			}
			else
			{
				cout << -1 << '\n';
			}
		}
	}
	return 0;
}