// BOJ #15650 - N과 M (2)
// https://www.acmicpc.net/problem/15650
#include <iostream>
#include <vector>
using namespace std;

// TODO

//중복없이, 오름차순

void backtracking(int N, int M, vector<int>& arr, int start, int depth)
{
    if(depth == M)
    {
        for(int i = 0; i < M; i++)
        {
            cout << arr[i] << " \n"[i == M - 1];
        }
        return;
    }

    for(int i = start; i <= N; i++)
    {
        if(i > start)
        {
            arr[depth] = i;
            start++;
            backtracking(N, M, arr, start, depth + 1);
            
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N, M;
    cin >> N >> M;

    // TODO
    vector<int> arr(8, 0);
    backtracking(N, M, arr, 0, 0);

    return 0;
}
