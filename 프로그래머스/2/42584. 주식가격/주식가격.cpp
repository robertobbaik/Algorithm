// 프로그래머스 - 주식가격
// https://school.programmers.co.kr/learn/courses/30/lessons/42584

#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> prices)
{
    vector<int> answer;

    for(int i = 0; i < prices.size(); i++)
    {
        int n = prices[i];
        int seconds = 0;
        for(int j = i + 1; j < prices.size(); j++)
        {
            seconds++;
            if(n > prices[j])
            {
                break;
            }
        }

        answer.push_back(seconds);
    }

    return answer;
}
