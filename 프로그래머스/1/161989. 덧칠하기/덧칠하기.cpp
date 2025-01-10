#include <string>
#include <vector>

using namespace std;

int solution(int n, int m, vector<int> section) {
    int answer = 1;
    int prev = section[0] + m;
    
    for(int i = 0; i < section.size(); i++)
    {
        if(section[i] >= prev)
        {
            answer++;
            prev = section[i] + m;
        }
    }
    return answer;
}