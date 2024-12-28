#include <string>
#include <vector>

using namespace std;

bool solution(int x) {
    int n = x;
    int temp = 0;
    
    while(n)
    {
        temp += n % 10;
        n /= 10;
    }
    
    bool answer = x % temp == 0;
    
    return answer;
}