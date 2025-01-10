#include <string>
#include <vector>

using namespace std;

int solution(int number, int limit, int power) {
    int answer = 0;
    vector<int> temp;
    
    for(int i = 1; i <= number; i++)
    {
        int primeCount = 0;
        for(int j = 1; j * j <= i; j++)
        {
            if(i % j == 0)
            {
                primeCount++;
                if(j != i / j)
                {
                    primeCount++;
                }
            }
        }
        primeCount = limit < primeCount ? power : primeCount;
        answer += primeCount;
    }
    
    return answer;
}