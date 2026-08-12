#include <string>
#include <vector>

using namespace std;

int solution(int n, int m, vector<int> section)
{
    int answer = 0;

    vector<bool> wall(n + 1, true);

    for (int i = 0; i < section.size(); i++)
    {
        wall[section[i]] = false;
    }

    for (int num : section)
    {
        if (!wall[num])
        {
            answer++;
            for (int i = 0; i < m; i++)
            {
                if(num + i > n) break;
                wall[num + i] = true;
            }
        }
    }

    return answer;
}