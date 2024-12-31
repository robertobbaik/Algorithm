#include <string>
#include <vector>

using namespace std;

int gcd(int a, int b)
{
    while(b)
    {
        int r = a % b;
        a = b;
        b = r;
    }
    
    return a;
}

vector<int> solution(int n, int m) {
    vector<int> answer;
    
    int bigNum = m > n ? m : n;
    int smallNum = m < n ? m : n;
    
    int commonDivisor = gcd(bigNum, smallNum);
    
    answer.push_back(commonDivisor);
    
    int commonMultiple = bigNum * smallNum / commonDivisor;
    answer.push_back(commonMultiple);
    
    return answer;
}