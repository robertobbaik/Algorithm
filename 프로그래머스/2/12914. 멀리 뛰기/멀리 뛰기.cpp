#include <string>
#include <vector>

using namespace std;

long long solution(int n) {
    long long answer = 0;

    int a = 0;
    int b = 1;
    int temp = 1;
    
    for(int i = 1; i <= n; ++i)
    {
        temp = (a + b) % 1234567;
        a = b % 1234567;
        b = temp % 1234567;
    }

    answer = temp;

    return answer;
}