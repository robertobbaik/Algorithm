#include <vector>
#include <queue>
#include <tuple>

using namespace std;

int dx[4] = {0, 0, -1, 1};
int dy[4] = {-1, 1, 0, 0};

int solution(vector<vector<int>> maps)
{
    int answer = -1;

    int n = maps.size();
    int m = maps[0].size();

    vector<vector<bool>> visited(n, vector<bool>(m, false));

    queue<tuple<int, int, int>> q;

    visited[0][0] = true;
    q.push({0, 0, 1});

    while (!q.empty())
    {
        auto [x, y, d] = q.front();
        q.pop();

        

        if(x == n - 1 && y == m - 1)
        {
            answer = d;
            break;
        }

        for(int i = 0; i < 4; i++)
        {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if(nx >= 0 && nx < n && ny >= 0 && ny < m)
            {
                if(!visited[nx][ny] && maps[nx][ny] == 1)
                {
                    visited[nx][ny] = true;
                    q.push({nx,ny, d + 1});
                }
            }
        }
    }

    return answer;
}