#include <string>
#include <vector>
#include <iostream>
#include <unordered_set>


using namespace std;

vector<int> solution(int n, vector<string> words)
{
    vector<int> answer;

    unordered_set<string> us;

    us.insert(words[0]);

    for(int i = 1; i < words.size(); i++)
    {
        if(words[i - 1].back() != words[i].front() || us.find(words[i]) != us.end())
        {
            int a = i % n + 1;
            int b = i / n + 1;

            return {a, b};
        }

        us.insert(words[i]);
    }
    return {0, 0};
}