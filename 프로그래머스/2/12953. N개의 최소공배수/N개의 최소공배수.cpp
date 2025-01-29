#include <string>
#include <vector>

using namespace std;

int rcd(int a, int b)
{
    if(a < b)
    {
        int temp = a;
        a = b;
        b = temp;
    }

    while (b)
    {
        int r = a % b;
        a = b;
        b = r;
    }

    return a;
}

int ldm(int a, int b)
{
    int result = a * b / rcd(a, b);

    return result;
}

int solution(vector<int> arr) {
    int answer = arr[0];

    for(int i = 1; i < arr.size(); ++i)
    {
        answer = ldm(arr[i], answer);
    }
    
    return answer;
}