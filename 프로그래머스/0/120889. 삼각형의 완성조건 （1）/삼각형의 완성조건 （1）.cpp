#include <string>
#include <vector>

using namespace std;

int solution(vector<int> sides) {
    int maxNum = 0;
    int maxIdx = 0;
    
    for(int i = 0; i < sides.size(); i++)
    {
        if(sides[i] > maxNum)
        {
            maxNum = sides[i];
            maxIdx = i;
        }
    }
    
    int addOtherSide = 0;
    
    for(int i = 0; i < sides.size(); i++)
    {
        if(i == maxIdx)
        {
            continue;
        }
        else
        {
           addOtherSide += sides[i];  
        }
    }
     
    int answer = addOtherSide > maxNum ? 1 : 2;
    return answer;
}