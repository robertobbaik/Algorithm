// BOJ #13305 - 주유소
// https://www.acmicpc.net/problem/13305
#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;

    vector<int> distance(N);
    vector<int> price(N);

    for (int i = 1; i < N; i++)
    {
        cin >> distance[i];
    }

    for (int i = 0; i < N; i++)
    {
        cin >> price[i];
    }

    int min_price = *min_element(price.begin(), price.end() - 1);
    int cost = 0;
    int prev_cost = 0;

    for (int i = 0; i < N; i++)
    {
        if (price[i] >= price[i + 1])
        {
            cost += distance[i + 1] * price[i];
        }
        else if (price[i] == min_price)
        {
            cost += accumulate(distance.begin() + i + 1, distance.end(), 0) * min_price;
            break;
        }
    }

    cout << cost << endl;

    return 0;
}
