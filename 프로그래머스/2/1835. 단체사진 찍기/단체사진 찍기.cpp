#include <string>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

// 전역 변수를 정의할 경우 함수 내에 초기화 코드를 꼭 작성해주세요.
int solution(int n, vector<string> data)
{
    int answer = 0;

    string str = "ACFJMNRT";

    do
    {
        bool is_valid = true;
        for(string s : data)
        {
            int a = str.find(s[0]);
            int b = str.find(s[2]);

            int gap = abs(a - b) - 1;
            int dis = s[4] - '0';
            
            if(s[3] == '>')
            {
                if(gap <= dis)
                {
                    is_valid = false;
                }
            }
            else if(s[3] == '<')
            {
                if(gap >= dis)
                {
                    is_valid = false;
                }
            }
            else
            {
                if(gap != dis)
                {
                    is_valid = false;
                }
            }
        }

        if(is_valid)
        {
            answer++;
        }
    } while (next_permutation(str.begin(), str.end()));
    

    return answer;
}