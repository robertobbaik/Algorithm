#include <string>
#include <vector>
#include <string>

using namespace std;

string solution(int a, int b) {
    
    vector<int> month = {31,29,31,30,31,30,31,31,30,31,30,31};
    vector<string> day = {"FRI", "SAT", "SUN", "MON", "TUE", "WED", "THU"};
    
    int tempDate = 0;
    
    for(int i = 0; i < a - 1; i++)
    {
        tempDate += month[i];
    }
    
    tempDate += b - 1;
    
    string answer = day[tempDate % 7];

    return answer;
}