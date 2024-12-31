#include <string>
#include <vector>

using namespace std;

int solution(vector<int> number) {
    int answer = 0;
    
   for(int i = 0; i < number.size(); i++)
   {
       int temp1 = number[i];
       for(int j = i + 1; j < number.size(); j++)
       {
           int temp2 = temp1 + number[j];
           for(int k = j + 1; k < number.size(); k++)
           {
               int temp3 = temp2 + number[k];
               if(temp3 == 0)
               {
                   answer ++;
               }
           }
       }
   }
    
    return answer;
}