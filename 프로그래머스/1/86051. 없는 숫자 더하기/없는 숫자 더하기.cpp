#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers)
{
    int answer = 0;

    vector<int> arr(10, 0);

    for(int n : numbers)
    {
        arr[n]++;
    }

    for(int i = 0; i < arr.size(); i++)
    {
        if(arr[i] == 0)
        {
            answer += i;
        }
    }
    
    return answer;
}