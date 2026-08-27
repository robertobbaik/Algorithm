#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string convertBase(int num, int n)
{
    string digits = "0123456789ABCDEF";
    string result = "";

    if(num == 0)
    {
        return "0";
    }

    while(num)
    {
        result += digits[num % n];
        num /= n;
    }

    reverse(result.begin(), result.end());

    return result;
}

string solution(int n, int t, int m, int p)
{
    string answer = "";

    string temp = "";
    
    int num = 0;

    while(temp.size() < t * m)
    {
        temp += convertBase(num, n);
        num++;
    }

    for(int i = 0; i < t; i++)
    {
        answer += temp[p - 1 + i * m];
    }
    

    return answer;
}