#include <iostream>
#include <vector>

using namespace std;

vector<vector<pair<int, int>>> tree;
vector<bool> visited;
int max_dist = 0;
int farthest_node = 0;

void dfs(int node, int dist)
{
	visited[node] = true;

	if (dist > max_dist)
	{
		max_dist = dist;
		farthest_node = node;
	}

	for (auto &edge : tree[node])
	{
		int next = edge.first;
		int weight = edge.second;

		if (!visited[next])
		{
			dfs(next, dist + weight);
		}
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int V;
	cin >> V;

	tree.assign(V + 1, vector<pair<int, int>>());
	visited.assign(V + 1, false);

	for (int i = 1; i < V + 1; ++i)
	{
		int node;
		cin >> node;

		while (true)
		{
			int adj;
			cin >> adj;
			if (adj == -1)
			{
				break;
			}

			int weight;
			cin >> weight;
			tree[node].push_back({adj, weight});
		}
	}

	dfs(1, 0);

	visited.assign(V + 1, false);
	max_dist = 0;
	dfs(farthest_node, 0);
	cout << max_dist << '\n';

	return 0;
}