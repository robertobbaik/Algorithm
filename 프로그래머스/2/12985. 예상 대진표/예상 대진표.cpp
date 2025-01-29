#include <iostream>

using namespace std;

int solution(int n, int a, int b)
{
    int answer = 0;
    int round = 0;

    while (true)
    {
        ++round;
        ++a;
        ++b;

        a /= 2;
        b /= 2;

        if (a == b)
        {
            answer = round;
            break;
        }
    }

    return answer;

}