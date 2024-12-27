#include <string>
#include <vector>

using namespace std;

vector<int> solution(long long n) {
    vector<int> answer;
    
    while(n)
    {
        int temp = n % 10;
        answer.push_back(temp);
        
        n /= 10;
    }

    return answer;
}