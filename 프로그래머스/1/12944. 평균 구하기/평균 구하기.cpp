#include <string>
#include <vector>
#include <numeric>

using namespace std;

double solution(vector<int> arr)
{
    double answer = 0;

    double num = accumulate(arr.begin(), arr.end(), 0);

    answer = num / arr.size();

    return answer;
}