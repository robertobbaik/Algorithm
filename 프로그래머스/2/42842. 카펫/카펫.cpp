#include <string>
#include <vector>

using namespace std;

vector<int> solution(int brown, int yellow)
{
    vector<int> answer;

    int totalGrid = brown + yellow;

    int limit = brown / 2;

    vector<pair<int, int>> temp;

    for(int i = 3; i < limit; ++i)
    {
        if(totalGrid % i != 0) continue; 
        int divide = totalGrid / i;

        if(totalGrid / i >= limit) continue;
        
        if((2 * divide) + (2 * i - 4) == brown)
        {
            temp.push_back({divide, i});
            break;
        }
    }

    answer.push_back(temp[0].first);
    answer.push_back(temp[0].second);

    return answer;
}