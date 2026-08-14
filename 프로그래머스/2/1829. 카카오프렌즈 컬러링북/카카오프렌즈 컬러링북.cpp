#include <vector>
#include <algorithm>
using namespace std;

int dx[4] = {0, 0, -1, 1};
int dy[4] = {-1, 1, 0, 0};

int mSize;
int nSize;

int dfs(vector<vector<int>> &picture, int x, int y, int color, int m, int n, vector<vector<bool>> &visited)
{
    visited[x][y] = true;
    int areaSize = 1;

    for (int i = 0; i < 4; i++)
    {
        int nx = x + dx[i];
        int ny = y + dy[i];

        if (nx >= 0 && nx < m && ny >= 0 && ny < n)
        {
            if (!visited[nx][ny] && picture[nx][ny] == color)
            {
                areaSize += dfs(picture, nx, ny, color, m, n, visited);
            }
        }
    }

    return areaSize;
}

// 전역 변수를 정의할 경우 함수 내에 초기화 코드를 꼭 작성해주세요.
vector<int> solution(int m, int n, vector<vector<int>> picture)
{
    int number_of_area = 0;
    int max_size_of_one_area = 0;

    vector<int> answer(2);
    answer[0] = number_of_area;
    answer[1] = max_size_of_one_area;

    vector<vector<bool>> visited(m, vector<bool>(n, false));

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (picture[i][j] == 0 || visited[i][j])
            {
                continue;
            }

            number_of_area++;

            int areaSize = dfs(picture, i, j, picture[i][j], m, n, visited);
            max_size_of_one_area = max(max_size_of_one_area, areaSize);
        }
    }

    answer[0] = number_of_area;
    answer[1] = max_size_of_one_area;

    return answer;
}