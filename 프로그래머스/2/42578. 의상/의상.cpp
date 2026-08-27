#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

int solution(vector<vector<string>> clothes)
{
    int answer = 1;

    unordered_map<string, int> um;

    for(vector<string> arr : clothes)
    {
        um[arr[1]]++;
    }

    for(auto a : um)
    {
        answer *= (a.second + 1);
    }

    return answer - 1;
}