#include <string>
#include <vector>
#include <cmath>

using namespace std;

long long solution(long long n) {
    long long answer = -1;
    
    long long sqrtN = static_cast<long long>(sqrt(n));
    
    if(sqrtN * sqrtN == n)
    {
        answer = (sqrtN + 1) * (sqrtN + 1);
    }
    else
    {
        answer = -1;    
    }

    return answer;
}