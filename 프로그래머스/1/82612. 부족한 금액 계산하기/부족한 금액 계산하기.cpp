using namespace std;

long long solution(int price, int money, int count)
{
    long long answer = -1;
    
    long long pay = 0;
    
    for(int i = 1; i <= count; i++)
    {
        pay += i * price;
    }
    
    answer = pay > money ? pay - money : 0;

    return answer;
}