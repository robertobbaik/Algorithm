#include <string>
#include <vector>

using namespace std;

int solution(string t, string p) {
    int answer = 0;
    
    int len = p.size();
    long long int num = stoll(p);
    for(int i = 0; i < t.size() - len + 1; i++)
    {
        string sub = t.substr(i, len);
        
        long long int tempNum = stoll(sub);
        
        if(tempNum <= num)
        {
            answer++;
        }
        
    }
    
    return answer;
}