#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers) {
    
    int tempArr[10] = {0,};

    
    for(int i = 0; i < numbers.size(); i++)
    {
        tempArr[numbers[i]] = numbers[i];    
    }
    
    int answer = 0;
    
    for(int i = 0; i < 10; i++)
    {
        if(tempArr[i] == 0)
        {
            answer += i;
        }
    }
    
    return answer;
}