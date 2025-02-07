#include <string>
#include <vector>
#include <unordered_map>


using namespace std;

int solution(vector<vector<string>> clothes) {
     int answer = 1;
    unordered_map<string, int> clothes_map;
    for(vector<string> v : clothes)
    {
        clothes_map[v[1]]++;
    }

    for(auto m : clothes_map)
    {
       answer *= (m.second + 1);
    }

    return answer - 1;
}