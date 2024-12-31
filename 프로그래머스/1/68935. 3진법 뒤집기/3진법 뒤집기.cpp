#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    
    string base3 = "";
    while(n)
    {
        base3 += to_string(n % 3);
        
        n /= 3;
    }
    
    int answer = 0;
    int power = 1;
    
    for(int i = base3.size() - 1; i >= 0; i--)
    {
        int temp = base3[i] - 48;
        
        answer += power * temp;
        
        power *= 3;
    }
    
    
    return answer;
}