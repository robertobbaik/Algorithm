// 프로그래머스 - 구명보트
// https://school.programmers.co.kr/learn/courses/30/lessons/42885

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> people, int limit)
{
    int answer = 0;
    vector<bool> leave(people.size(), false);

    sort(people.rbegin(), people.rend());

    int right = people.size() - 1;

    for(int i = 0; i < people.size(); i++)
    {
        if(leave[i]) continue;

        if(people[i] + people[right] <= limit)
        {
            leave[i] = true;
            leave[right] = true;
            answer++;
            right--;
        }
        else
        {
            leave[i] = true;
            answer++;
        }
    }
    
    

    return answer;
}
