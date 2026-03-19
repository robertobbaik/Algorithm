// 프로그래머스 - 카펫
// https://school.programmers.co.kr/learn/courses/30/lessons/42842

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(int brown, int yellow)
{
    vector<int> answer;

    int total = brown + yellow;

    int minVal = 2;

    for(int i = minVal; i < total / minVal; i++)
    {
        if(total % i == 0)
        {
            int w = total / i;
            int tempBrown = 2 * w + 2 * (i - 2);

            if(tempBrown == brown)
            {
                answer.push_back(total / i);
                answer.push_back(i);
                break;
            }
        }
    }

    return answer;
}
