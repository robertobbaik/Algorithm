#include <string>
#include <vector>

using namespace std;

int solution(int num) {
    int answer = 0;
    int64_t temp = num;
    
    if(num == 1)
    {
        return 0;
    }
    
    while(temp != 1)
    {
        answer++;
        if(answer >= 500) return -1;
        
        if(temp % 2 == 0)
        {
            temp /= 2;
        }
        else
        {
            temp *= 3;
            temp += 1;
        }
    }
   
    return answer;
}