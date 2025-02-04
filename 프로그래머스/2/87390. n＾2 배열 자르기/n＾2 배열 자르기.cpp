#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, long long left, long long right) {
    vector<int> answer;
    for (size_t i = left; i <= right; ++i)
    {
        int temp1 = i / n;
        int temp2 = i % n;

        answer.push_back(max(temp1, temp2) + 1);
    }

    return answer;
}