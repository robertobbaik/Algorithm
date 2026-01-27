#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	string str;
	cin >> str;

	vector<string> croalpha = {"c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z="};

	int alphaCount = 0;
	int pre = 0;
	for(int i = 0; i < croalpha.size(); i++)
	{
		while(true)
		{
			int pos = str.find(croalpha[i]);

			if (pos == string::npos) break; 

			str.replace(pos, croalpha[i].length(), "@");
		}	
	}

	cout << str.size() << endl;

	return 0;
}