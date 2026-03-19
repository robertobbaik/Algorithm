// BOJ #1182 - 부분수열의 합
// https://www.acmicpc.net/problem/1182
#include <iostream>
#include <vector>

using namespace std;

int answer = 0;

void backtracking(int N, int S, vector<int> &arr, int index, int sum)
{
    if (index == N)
    {
        if(sum == S)
        {
            answer++;
        }
        return;
    }

    backtracking(N, S, arr, index + 1, sum + arr[index]);
    backtracking(N, S, arr, index + 1, sum);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N, S;
    cin >> N >> S;

    vector<int> arr(N);

    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }

    answer = S == 0 ? -1 : 0;

    backtracking(N, S, arr, 0, 0);

    cout << answer << endl;

    return 0;
}