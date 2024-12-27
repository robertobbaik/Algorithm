#include <iostream>

using namespace std;
int solution(int n)
{
    int answer = 0;
    while(n)
    {
        int num = n % 10;
        
        answer += num;

        n /= 10;
    }

    return answer;
}