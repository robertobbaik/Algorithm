#include <string>
#include <vector>

using namespace std;

vector<int> solution(int brown, int yellow)
{
    vector<int> answer;

    int total = brown + yellow;

    

    for(int row = 3; row < brown; row++)
    {
        if(total % row != 0)
        {
            continue;
        }

        int col = total / row;

        if(row * 2 + (col - 2) * 2 == brown)
        {
            answer.push_back(col);
            answer.push_back(row);
            return answer;
        }
    }


    

    return answer;
}

