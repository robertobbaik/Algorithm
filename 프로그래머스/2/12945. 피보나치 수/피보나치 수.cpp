#include <string>
#include <vector>

using namespace std;

int solution(int n) {
       int answer = 0;
    int m = 1234567;
    vector<int> fibonacci(n + 1, 0);

    if (n > 2)
    {
        fibonacci[0] = 0;
        fibonacci[1] = 1;

        for (int i = 2; i <= n; ++i)
        {
            fibonacci[i] = (fibonacci[i - 2]  + fibonacci[i - 1]) % m;
        }

        answer = fibonacci[n];
    }
    else
    {
        answer = n;
    }

    
    return answer;
}