#include <string>
#include <vector>

using namespace std;

int solution(int left, int right) {
    int answer = 0;
    
    vector<int> v;
    
    for(int i = left; i <= right; i++)
    {
        v.push_back(i);
    }
    
    for(int i = 0; i < v.size(); i++)
    {
        int temp = 0;
        for(int j = 1; j <= v[i]; j++)
        {
            if(v[i] % j == 0)
            {
                temp++;
            }
        }
        
        int a = temp % 2 == 0 ? v[i] : -1 * v[i];
        
        answer += a;
    }
    
    return answer;
}