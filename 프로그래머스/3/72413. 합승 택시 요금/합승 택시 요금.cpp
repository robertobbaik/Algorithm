#include <string>
#include <vector>
#include <algorithm>

using namespace std;

const int INF = 1e9;

int solution(int n, int s, int a, int b, vector<vector<int>> fares)
{
    vector<vector<int>> distance(n + 1, vector<int>(n + 1, INF));

    for (int i = 1; i <= n; i++)
    {
        distance[i][i] = 0;
    }

    for (auto &fare : fares)
    {
        int u = fare[0], v = fare[1], w = fare[2];
        distance[u][v] = w;
        distance[v][u] = w;
    }

    for (int k = 1; k < n + 1; k++)
    {
        for (int i = 1; i < n + 1; i++)
        {
            for (int j = 1; j < n + 1; j++)
            {
                if (distance[i][k] != INF && distance[k][j] != INF)
                {
                    distance[i][j] = min(distance[i][j], distance[i][k] + distance[k][j]);
                }
            }
        }
    }

    int answer = INF;

    for (int mid = 1; mid < n + 1; mid++)
    {
        if (distance[s][mid] != INF && distance[mid][a] != INF && distance[mid][b] != INF)
        {
            int totalCost = distance[s][mid] + distance[mid][a] + distance[mid][b];
            answer = min(answer, totalCost);
        }
    }

    return answer;
}