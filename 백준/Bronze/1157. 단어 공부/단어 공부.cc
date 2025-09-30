#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	string s;
	cin >> s;

	vector<int> arr(26, 0);

	for(char c : s)
	{
		arr[tolower(c) - 97]++;
	}

	int max = *max_element(arr.begin(), arr.end());

	int count = 0;
	int answer = 0;


	for(int i = 0; i < arr.size(); i++)
	{
		if(max == arr[i])
		{
			answer = i;
			count++;
		}
	}

	if(count == 1)
	{
		char c = answer + 97;
		cout << (char)toupper(c) << endl;
	}
	else
	{
		cout << '?' << endl;
	}

	return 0;
}