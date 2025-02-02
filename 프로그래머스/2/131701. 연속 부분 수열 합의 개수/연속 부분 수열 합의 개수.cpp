#include <string>
#include <vector>
#include <unordered_set>

using namespace std;

int solution(vector<int> elements) {
     int answer = 0;
    unordered_set<int> num_set;
    for (int i = 0; i < elements.size(); ++i)
    {
        int temp = 0;
        for (int j = 0; j < elements.size(); ++j)
        {
            temp += elements[(i + j) % elements.size()];
            num_set.insert(temp);
        }
    }

    answer = num_set.size();

    return answer;
}