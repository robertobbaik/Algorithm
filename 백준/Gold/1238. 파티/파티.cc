// BOJ #1238 - 파티
// https://www.acmicpc.net/problem/1238
#include <iostream>
#include <vector>
#include <climits>
#include <queue>
#include <algorithm>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N, M, X;

    cin >> N >> M >> X;

    vector<vector<pair<int, int>>> graph(N + 1);

    for (int i = 0; i < M; i++)
    {
        int u, v, w;

        cin >> u >> v >> w;

        graph[u].push_back({v, w});
    }

    vector<int> returnDistace(N + 1, 0);

    for (int i = 1; i < N + 1; i++)
    {
        vector<int> distance(N + 1, INT_MAX);
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

        distance[i] = 0;
        pq.push({0, i});

        while (!pq.empty())
        {
            auto [currentDistance, currentNode] = pq.top();
            pq.pop();

            if (distance[currentNode] < currentDistance)
            {
                continue;
            }

            for (auto [neighborNode, cost] : graph[currentNode])
            {
                int newDistance = distance[currentNode] + cost;

                if (newDistance < distance[neighborNode])
                {
                    distance[neighborNode] = newDistance;
                    pq.push({newDistance, neighborNode});
                }
            }
        }


        if (i == X)
        {
            for (int j = 1; j < N + 1; j++)
            {
                returnDistace[j] += distance[j];
            }
        }
        else
        {
            returnDistace[i] += distance[X];
        }
    }

    cout << *max_element(returnDistace.begin() + 1, returnDistace.end()) << endl;

    return 0;
}
