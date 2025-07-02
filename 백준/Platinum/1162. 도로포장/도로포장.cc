#include <iostream>
#include <vector>
#include <queue>
#include <climits>
#include <tuple>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N, M, K;
    cin >> N >> M >> K;
    
    vector<vector<pair<int, int>>> graph(N + 1);
    
    for (int i = 0; i < M; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        graph[u].push_back({v, w});
        graph[v].push_back({u, w});
    }
    
    // dist[node][paved] = node까지 paved개 포장했을 때 최단거리
    vector<vector<long long>> dist(N + 1, vector<long long>(K + 1, LLONG_MAX));
    
    // {거리, 노드, 포장횟수}
    priority_queue<tuple<long long, int, int>, vector<tuple<long long, int, int>>, greater<tuple<long long, int, int>>> pq;
    
    dist[1][0] = 0;
    pq.push({0, 1, 0});
    
    while (!pq.empty()) {
        auto [d, node, paved] = pq.top();
        pq.pop();
        
        if (d > dist[node][paved]) continue;
        
        for (auto [next, cost] : graph[node]) {
            // 1. 포장하지 않고 이동
            if (dist[node][paved] + cost < dist[next][paved]) {
                dist[next][paved] = dist[node][paved] + cost;
                pq.push({dist[next][paved], next, paved});
            }
            
            // 2. 포장하고 이동 (K개 미만일 때만)
            if (paved < K && dist[node][paved] < dist[next][paved + 1]) {
                dist[next][paved + 1] = dist[node][paved]; // 비용 0
                pq.push({dist[next][paved + 1], next, paved + 1});
            }
        }
    }
    
    // N번 노드까지 가는 최소 비용 (포장횟수 0~K 중 최솟값)
    long long result = LLONG_MAX;
    for (int i = 0; i <= K; i++) {
        result = min(result, dist[N][i]);
    }
    
    cout << result << endl;
    return 0;
}