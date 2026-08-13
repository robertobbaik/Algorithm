#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list)
{
    int answer = 0;

    int multiply = 1;
    int pow = 0;

    for(int n : num_list)
    {
        multiply *= n;
        pow += n;
    }

    pow = pow * pow;

    answer = pow > multiply ? 1 : 0;
    return answer;
}