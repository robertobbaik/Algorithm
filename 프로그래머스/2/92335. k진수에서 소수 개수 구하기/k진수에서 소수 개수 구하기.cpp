#include <string>
#include <vector>
#include <cmath>
#include <stack>

using namespace std;

bool isPrime(long long num)
{
    if (num < 2)
        return false;
    if (num == 2)
        return true;
    if (num % 2 == 0)
        return false;

    for (long long i = 3; i <= sqrt(num); i += 2)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}

vector<string> string_split(string str, char delimiter)
{
    vector<string> result;

    int start = 0;
    int end = 0;

    while((end = str.find(delimiter, start)) != string::npos)
    {
        result.push_back(str.substr(start, end - start));
        start = end + 1;
    }

    result.push_back(str.substr(start, string::npos));

    return result;
}

string tobase(int num, int base)
{
    string result = "";
    stack<int> s;
    while(num)
    {
        int remainder = num % base;
        num /= base;
        s.push(remainder);
    }

    while(!s.empty())
    {
        result += to_string(s.top());
        s.pop();
    }

    return result;
}

int solution(int n, int k) {
    int answer = 0;

    string base = tobase(n, k);

    vector<string> v = string_split(base, '0');

    for(string s : v)
    {
        if(s.empty()) continue;
        long long num = stoll(s);

        if(isPrime(num))
        {
            answer++;
        }
      
    }

    return answer;
}