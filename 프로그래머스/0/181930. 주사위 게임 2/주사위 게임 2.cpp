#include <string>
#include <vector>

using namespace std;

int myPow(int num, int exp)
{
    int result = 1;
    for (int i = 0; i < exp; i++)
    {
        result *= num;
    }
    return result;
}

int solution(int a, int b, int c)
{
    int answer = a + b + c;

    if (a == b && b == c)
    {
        answer *= (myPow(a, 2) + myPow(b, 2) + myPow(c, 2));
        answer *= (myPow(a, 3) + myPow(b, 3) + myPow(c, 3));
    }
    else if (a == b || b == c || a == c)
    {
        answer *= (myPow(a, 2) + myPow(b, 2) + myPow(c, 2));
    }

    return answer;
}