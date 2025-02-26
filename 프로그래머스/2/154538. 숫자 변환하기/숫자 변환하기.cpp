#include <string>
#include <vector>
#include <queue>
#include <unordered_set>

using namespace std;


int solution(int x, int y, int n) {
     if (x == y) return 0;
    
    int answer = -1;
    queue<pair<int, int>> q; 
    unordered_set<int> visited; 
    pair<int, int> temp = {0, x};
    visited.insert(x);
    q.push(temp);
    
    while(!q.empty())
    {
        int count = q.front().first;
        int value = q.front().second;
        
        q.pop();

        vector<int> next_value = {value * 2, value * 3, value + n};    

        for(int num : next_value)
        {
            if(num == y) return count + 1;
        
            if(num < y && visited.find(num) == visited.end())
            {
                q.push({count + 1, num});
                visited.insert(num);
            }
        }
    }

    return -1;
}