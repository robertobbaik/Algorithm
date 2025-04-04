#include <string>
#include <vector>

using namespace std;

void dfs(const vector<vector<int>> graph, vector<bool> &visited, int start)
{
    visited[start] = true;

    for (int n : graph[start])
    {
        if (!visited[n])
        {
            dfs(graph, visited, n);
        }
    }
}

int solution(int n, vector<vector<int>> computers)
{
    int answer = 0;

    vector<vector<int>> graph(n);
    vector<bool> visited(n, false);

    for (int i = 0; i < computers.size(); i++)
    {
        for (int j = 0; j < computers[i].size(); j++)
        {
            if (i == j)
                continue;

            if (computers[i][j] == 1)
            {
                graph[i].push_back(j);
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (!visited[i])
        {
            answer++;
            dfs(graph, visited, i);
        }
    }

    return answer;
}