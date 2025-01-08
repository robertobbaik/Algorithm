#include <vector>
#include <iostream>
using namespace std;

int solution(vector<int> nums) {
    int answer = 0;

    for(int i = 0; i < nums.size(); i++)
    {
        for(int j = i + 1; j < nums.size(); j++)
        {
            for(int k = j + 1; k < nums.size(); k++)
            {
                int temp = nums[i] + nums[j] + nums[k];
                bool isPrimeNum = false;
                for(int l = 2; l < temp; l++)
                {
                    if(temp % l == 0)
                    {
                        isPrimeNum = true;
                        break;
                    }
                }
                
                if(!isPrimeNum)
                {
                    answer++;
                }
            }
        }
    }

    return answer;
}