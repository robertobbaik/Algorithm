#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main()
{
	int N;
	cin >> N;

	stack<int> s;

	for (int i = 0; i < N; i++)
	{
		string str;
		cin >> str;

		if (str == "push")
		{
			int n;
			cin >> n;
			s.push(n);
		}
		else if (str == "pop")
		{
			if (s.empty())
			{
				cout << -1 << "\n";
			}
			else
			{
				int n = s.top();
				s.pop();
				cout << n << "\n";
			}
		}
		else if (str == "size")
		{
			cout << s.size() << "\n";
		}
		else if (str == "empty")
		{
			if (s.empty())
			{
				cout << 1 << "\n";
			}
			else
			{
				cout << 0 << "\n";
			}
		}
		else if (str == "top")
		{
			if (s.empty())
			{
				cout << -1 << "\n";
			}
			else
			{
				cout << s.top() << "\n";
			}
		}
	}
	return 0;
}