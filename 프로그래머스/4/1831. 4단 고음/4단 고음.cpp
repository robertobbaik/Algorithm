#include <iostream>
#include <cmath>

using namespace std;

int cnt = 0;
int maxMul;

void dfs(long cur, int plusCnt)
{
    if ((int)(log(cur) / log(3)) * 2 < plusCnt)
        return;
    if (cur == 3 && plusCnt == 2)
    {
        cnt++;
        return;
    }
    if (cur < 3)
        return;

    if (cur % 3 == 0 && plusCnt >= 2)
    {
        dfs(cur / 3, plusCnt - 2);
    }

    dfs(cur - 1, plusCnt + 1);
}
int solution(int n)
{
    cnt = 0;
    dfs(n - 2, 2);
    return cnt;
}