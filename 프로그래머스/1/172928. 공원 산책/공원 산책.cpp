#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> park, vector<string> routes) {
    vector<int> answer;
    int column = 0;
    int row = 0;

    for (int i = 0; i < park.size(); ++i)
    {
        for (int j = 0; j < park[i].size(); ++j)
        {
            if (park[i][j] == 'S')
            {
                column = i;
                row = j;
                break;
            }
        }
    }

    for (int i = 0; i < routes.size(); i++)
    {
        string route = routes[i];
        char dir = route[0];
        int distance = route[2] - '0';

        int tempRow = 0;
        int tempColumn = 0;
        
        for (int j = 1; j <= distance; ++j)
        {
            switch (dir)
            {
            case 'E':
                ++tempRow;
                break;
            case 'W':
                --tempRow;
                break;
            case 'S':
                ++tempColumn;
                break;
            case 'N':
                --tempColumn;
                break;
            }

            if (tempColumn + column >= park.size() || tempRow + row >= park[0].size() || tempColumn + column < 0 || tempRow + row < 0 || park[tempColumn + column][tempRow + row] == 'X')
            {
                tempColumn = 0;
                tempRow = 0;
                break;
            }
         
        }

        row += tempRow;
        column += tempColumn;
    }

    answer.push_back(column);
    answer.push_back(row);
    

    return answer;
}