#include <string>
#include <vector>
#include <sstream>
#include <unordered_map>

using namespace std;

vector<string> splitBySpace(const string &text)
{
    vector<string> result;
    string token;
    stringstream stream(text);

    while (stream >> token)
    {
        result.push_back(token);
    }

    return result;
}

vector<int> solution(vector<string> park, vector<string> routes)
{
    vector<int> answer;
    unordered_map<char, pair<int, int>> um = {
        {'E', {0, 1}},
        {'W', {0, -1}},
        {'S', {1, 0}},
        {'N', {-1, 0}}};

    int h = park.size();
    int w = park[0].size();

    pair<int, int> start;

    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            if (park[i][j] == 'S')
            {
                start = {i, j};
            }
        }
    }

    for (int i = 0; i < routes.size(); i++)
    {
        vector<string> split = splitBySpace(routes[i]);
        char dir = routes[i][0];
        int len = stoi(split[1]);

        auto [dx, dy] = um[dir];
        auto next = start;
        bool canMove = true;

        for (int j = 0; j < len; j++)
        {
            int nx = next.first + dx;
            int ny = next.second + dy;

            if (nx < 0 || nx >= h || ny < 0 || ny >= w || park[nx][ny] == 'X')
            {
                canMove = false;
                break;
            }

            next = {nx, ny};
        }

        if (canMove)
        {
            start = next;
        }
    }

    answer.push_back(start.first);
    answer.push_back(start.second);

    return answer;
}