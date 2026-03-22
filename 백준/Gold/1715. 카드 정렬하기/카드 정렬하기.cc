// BOJ #1715 - 카드 정렬하기
// https://www.acmicpc.net/problem/1715
#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;

    priority_queue<int, vector<int>, greater<int>> pq;

    vector<int> arr(N);

    for (int i = 0; i < N; i++)
    {
        int num;
        cin >> num;

        pq.push(num);
    }

    int answer = 0;

    while (pq.size() > 1)
    {
        int num1 = pq.top();
        pq.pop();
        int num2 = pq.top();
        pq.pop();

        int temp = num1 + num2;
        answer += temp;

        pq.push(temp);
    }

    cout << answer << endl;
}
