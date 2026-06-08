// 프로그래머스 - 최댓값과 최솟값
// https://school.programmers.co.kr/learn/courses/30/lessons/12939

#include <string>
#include <sstream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

string solution(string s)
{
    string answer = "";

    stringstream ss(s);

    int num;

    int min_num = INT_MAX;
    int max_num = INT_MIN;

    while(ss >> num)
    {
        min_num = min(min_num, num);
        max_num = max(max_num, num);
    }

    answer = to_string(min_num) + " " + to_string(max_num);

    return answer;
}
