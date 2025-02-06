#include <iostream>
#include <unordered_map>
#include <string>
#include <vector>
#include <numeric>

using namespace std;

int solution(vector<string> want, vector<int> number, vector<string> discount)
{
    int answer = 0;

    for (int i = 0; i < discount.size() - 9; ++i)
    {
        unordered_map<string, int> discount_map;
        for (int j = 0; j < 10; ++j)
        {
            discount_map[discount[i + j]]++;
        }

        bool isComplete = true;
        for (int j = 0; j < want.size(); ++j)
        {
            if (discount_map[want[j]] < number[j])
            {
                isComplete = false;
                break;
            }
        }

        if (isComplete)
        {
            answer++;
        }
        discount_map.clear();
    }

    return answer;
}