#include <string>
#include <vector>

using namespace std;

int solution(vector<int> ingredient) {
    int answer = 0;
    
    vector<int> stack;
    for(int i : ingredient)
    {
        stack.push_back(i);

        if(stack.size() >= 4 &&
        stack[stack.size()-4] == 1 &&
        stack[stack.size()-3] == 2 &&
        stack[stack.size()-2] == 3 &&
        stack[stack.size()-1] == 1)
        {
            for(int j = 0; j < 4; ++j)
            {
                stack.pop_back();
            }
            ++answer;
        }
    }
    return answer;
}