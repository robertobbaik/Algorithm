// 프로그래머스 - 같은 숫자는 싫어
// https://school.programmers.co.kr/learn/courses/30/lessons/12906
#include <iostream>
#include <vector>

using namespace std;

// TODO: 반환 타입과 파라미터를 문제에 맞게 수정하세요
// 지원 타입: int, long long, double, bool, string
//            vector<int>, vector<long long>, vector<string>, vector<vector<int>> 등
vector<int> solution(vector<int> arr)
{
    vector<int> answer;

    answer.push_back(arr[0]);

    for(int i = 1; i < arr.size(); i++)
    {
        if(arr[i - 1] == arr[i])
        {
            continue;
        }

        answer.push_back(arr[i]);
    }

    return answer;
}
