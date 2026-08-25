#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int cacheSize, vector<string> cities)
{
    int answer = 0;

    vector<string> cache;

    for(string s : cities)
    {
        for(char& c : s)
        {
            c = tolower(c);
        }

        auto it = find(cache.begin(), cache.end(), s);

        if(it != cache.end())
        {
            answer += 1;
            cache.erase(it);
            cache.push_back(s);
        }
        else
        {
            answer += 5;
            if(cacheSize == 0)
            {
                continue;
            }

            if(cache.size() == cacheSize)
            {
                cache.erase(cache.begin());
            }

            cache.push_back(s);
        }
    }
    return answer;
}