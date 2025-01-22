#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> wallpaper) {
        int minX = wallpaper[0].size();
    int minY = wallpaper.size();
    int maxX = 0;
    int maxY = 0;

    for(int i = 0; i < wallpaper.size(); i++)
    {
        for(int j = 0; j < wallpaper[i].size(); j++)
        {
            if(wallpaper[i][j] == '#')
            {
                if(j < minX)
                {
                    minX = j;
                }

                if(j > maxX)
                {
                    maxX = j;
                }

                if(i < minY)
                {
                    minY = i;
                }

                if(i > maxY)
                {
                    maxY = i;
                }
            }
        }
    }

    vector<int> answer;

    answer.push_back(minY);
    answer.push_back(minX);
    answer.push_back(maxY + 1);
    answer.push_back(maxX + 1);
    return answer;
}