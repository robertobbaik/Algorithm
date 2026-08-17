#include <vector>
#include <string>
#include <stack>

using namespace std;

int binary(int n)
{
    stack<int> st;
    int result = 0;
    while(n)
    {
        int remainder = n % 2;
        st.push(remainder);
        if(remainder == 1)
        {
            result++;
        }
        n /= 2;
    }

    return result;
}

int solution(int n)
{
    int answer = 0;

    int num = binary(n);

    int add = 1;
    while(true)
    {
        if(binary(n + add) == num)
        {
            answer = n + add;
            break;
        }
        else
        {
            add++;
        }
    }

    return answer;
}