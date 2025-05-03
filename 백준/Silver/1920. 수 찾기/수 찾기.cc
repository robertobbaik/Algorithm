#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
    //freopen("findnum.txt", "r", stdin);
    ios::sync_with_stdio(false); // 입출력 속도 개선
    cin.tie(nullptr);    
    int N;

    cin >> N;

    vector<int> A(N);

    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }

    sort(A.begin(), A.end());

    int M;

    cin >> M;

    for (int i = 0; i < M; i++)
    {
        int n;
        cin >> n;

        bool has_num = binary_search(A.begin(), A.end(), n);

        if(has_num)
        {
            cout << 1 << '\n';
        }
        else
        {
            cout << 0 << '\n';
        }
    }

    return 0;
}