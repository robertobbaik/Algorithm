#include <string>
#include <vector>

using namespace std;

long long solution(long long n) {
    long long answer = 0;
    vector<long long> temp;
    
    while(n)
    {
        temp.push_back(n % 10);    
        n /= 10;
    }

    for(int i = 0; i < temp.size(); i++)
    {
        bool isSwaped = false;
        
        for(int j = i + 1; j < temp.size(); j++)
        {
            if(temp[i] < temp[j])
            {
                int a = temp[i];
                temp[i] = temp[j];
                temp[j] = a;
            }
        }
    }
    
    int b = 1;
    for(int i = temp.size() - 1; i >= 0; i--)
    {
        answer += temp[i] * b;
        b *= 10;
    }
    
    return answer;
}