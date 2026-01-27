#include <iostream>
#include <string>
using namespace std;

int main()
{
	int N;
	cin >> N;

	int count = 1;
	int start = 666;

	while(count < N)
	{
		start++;
		if(to_string(start).find("666") != string::npos)
		{
			count++;
		}
	}

	cout << start << endl;

	return 0;
}