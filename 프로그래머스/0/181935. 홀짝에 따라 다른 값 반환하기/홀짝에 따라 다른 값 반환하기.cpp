#include <string>
#include <vector>

using namespace std;

int pow(int n)
{
    return n * n;
}

int solution(int n)
{
    int answer = 0;

    if (n % 2 == 0)
    {
        for(int i = 2; i <= n; i += 2)
        {
            answer += pow(i);
        }
    }
    else
    {
        for(int i = 1; i <= n; i += 2)
        {
            answer += i;
        }
    }
    return answer;
}