#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, int s)
{
    if (n > s)
    {
        
        return {-1};
    }
    vector<int> answer(n);
    int base = s / n;
    int remainder = s % n;

    for (int i = 0; i < n; i++)
    {
        answer[i] = base;
    }

    for (int i = n - remainder; i < n; i++)
    {
        answer[i]++;
    }

    return answer;
}
