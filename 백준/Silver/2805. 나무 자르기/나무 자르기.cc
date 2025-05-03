#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool can(const vector<int>& woods, int num, int target)
{
    long long total = 0;
    for(int i = 0; i < woods.size(); i++)
    {
        if(woods[i] > num)
        {
            total += (woods[i] - num);
        }
    }

    return total >= target;
}

int main(void)
{
    //freopen("wood.txt", "r", stdin);
    int N;
    cin >> N;

    int need;
    cin >> need;

    vector<int> woods(N);

    for (int i = 0; i < N; i++)
    {
        cin >> woods[i];
    }

    int left = 0;
    int right = *max_element(woods.begin(), woods.end());
    int answer = 0;

    while (left <= right)
    {
        int mid = (left + right) / 2;

        if (can(woods, mid, need))
        {
            answer = mid;
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }

    cout << answer << endl;

    return 0;
}