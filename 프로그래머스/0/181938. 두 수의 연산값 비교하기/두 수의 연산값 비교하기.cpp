#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int a, int b)
{
    int answer = 0;

    int add = stoi(to_string(a) + to_string(b));

    answer = max(add, 2 * a * b);
    
    return answer;
}