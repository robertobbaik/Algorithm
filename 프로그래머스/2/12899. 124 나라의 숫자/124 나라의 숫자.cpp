#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(int n)
{
    string answer = "";
    string numbers = "124";

    while(n)
    {
        n--;

        answer += numbers[n % 3];
        n /= 3;
    }

    reverse(answer.begin(), answer.end());


    return answer;
}