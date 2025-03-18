#include <string>
#include <vector>
#include <numeric>
#include <queue>

using namespace std;

int solution(vector<int> queue1, vector<int> queue2) {
    queue<int> q1, q2;
    long long sumA = accumulate(queue1.begin(), queue1.end(), 0LL);
    long long sumB = accumulate(queue2.begin(), queue2.end(), 0LL);
    long long totalSum = sumA + sumB;
    
    if (totalSum % 2 != 0) return -1;
    
    for (int num : queue1) q1.push(num);
    for (int num : queue2) q2.push(num);

    int target = totalSum / 2;
    int operations = 0;
    int maxOperations = queue1.size() + queue2.size() * 2; 

    while (sumA != sumB && operations <= maxOperations) {
        if (sumA > sumB) { 
            int front = q1.front();
            q1.pop();
            q2.push(front);
            sumA -= front;
            sumB += front;
        } else { 
            int front = q2.front();
            q2.pop();
            q1.push(front);
            sumB -= front;
            sumA += front;
        }
        operations++;
    }

    return (sumA == sumB) ? operations : -1;
}