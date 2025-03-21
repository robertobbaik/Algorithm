#include <string>
#include <vector>

using namespace std;

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int solution(vector<vector<int>> sizes) {
    int answer = 0;
    
    int width = 0;
    int height = 0;

    for (int i = 0; i < sizes.size(); i++)
    {
        if (sizes[i][0] > sizes[i][1])
        {
            swap(sizes[i][0], sizes[i][1]);
        }

        width = max(width, sizes[i][0]);
        height = max(height, sizes[i][1]);
    }

    answer = width * height;

    return answer;
}