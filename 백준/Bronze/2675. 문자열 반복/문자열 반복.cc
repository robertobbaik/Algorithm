#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int T;
	cin >> T;

	while (T--)
	{
		int R;
		cin >> R;
		string S;
		cin >> S;

		for (char c : S)
		{
			for (int i = 0; i < R; i++)
			{
				cout << c;
			}
		}
		cout << endl;
	}
	return 0;
}