#include <string>
#include <vector>
#include <cmath>

using namespace std;

long long solution(long long n) {
      long long answer = 0;
    long long temp = 1;
    while(true){
        if(temp*temp==n){
            return (temp+1)*(temp+1);
        }
        temp++;
        if(temp == n){
            return -1;
        }
    }
    return answer;
}