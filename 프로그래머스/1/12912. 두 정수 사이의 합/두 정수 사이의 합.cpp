#include <string>
#include <vector>

using namespace std;

long long solution(int a, int b) {
    
    int bigNum = a > b ? a : b;
    int smallNum = a < b ? a : b;
    long long answer = 0;
    for(int i = smallNum; i <= bigNum; i++)
    {
        answer += i;
    }
    
    
    return answer;
}