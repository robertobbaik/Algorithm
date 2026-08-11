using namespace std;

long long solution(int price, int money, int count)
{
    long long answer = -1;

    long long cost = 0;

    for(int i = 1; i <= count; i++)
    {
        cost += i * price;
    }

    answer = money >= cost ? 0 : cost - money;

    return answer;
}