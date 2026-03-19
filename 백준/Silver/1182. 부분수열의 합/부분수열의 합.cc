// BOJ #1182 - 부분수열의 합
// https://www.acmicpc.net/problem/1182
#include <iostream>
#include <vector>


using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N, S;
    cin >> N >> S;

    vector<int> arr(N);

    for(int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }

    int answer = 0;

    for(int i = 1; i < (1 << N); i++)
    {
        int sum = 0;
        for(int j = 0; j < N; j++)
        {
            if(i & (1 << j))
            {
                sum += arr[j];
            }
        }

        if(sum == S)
        {
            answer++;
        }
    }

    cout << answer << endl;

    return 0;
}

// [코드 평가]
// 정확한 풀이. i=1부터 시작해 공집합 제외, 비트마스크로 2^N 부분집합 순회
