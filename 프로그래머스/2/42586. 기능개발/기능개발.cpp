#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
       vector<int> answer;

    int count = progresses.size();

    while (count)
    {
        int temp = 0;
        for (size_t i = 0; i < progresses.size(); i++)
        {
            if(progresses[i] != -1)
            {
                progresses[i] += speeds[i];
            }
        }

        for (size_t i = 0; i < progresses.size(); i++)
        {
            if (progresses[i] >= 100)
            {
                progresses[i] = -1;
                --count;
                ++temp;
            }
            else if(progresses[i] == -1)
            {
                continue;
            }
            else
            {
                break;
            }
        }

        if (temp != 0)
        {

            answer.push_back(temp);
        }
    }

    return answer;
}