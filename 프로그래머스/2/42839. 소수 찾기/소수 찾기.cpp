#include <string>
#include <vector>
#include <algorithm>
#include <unordered_set>

using namespace std;

bool isPrime(int n)
{
    if (n < 2)
    {
        return false;
    }

    if (n == 2)
    {
        return true;
    }

    if (n % 2 == 0)
    {
        return false;
    }

    for (int i = 3; i * i <= n; i += 2)
    {
        if (n % i == 0)
        {
            return false;
        }
    }

    return true;
}

int solution(string numbers)
{
    int answer = 0;

    unordered_set<int> us;

    sort(numbers.begin(), numbers.end());
    do
    {
        string temp;

        for (char c : numbers)
        {
            temp += c;
            int n = stoi(temp);

            us.insert(n);
        }
        temp = "";
    } while (next_permutation(numbers.begin(), numbers.end()));

    for(int n : us)
    {
        if(isPrime(n))
        {
            answer++;
        }
    }

    return answer;
}