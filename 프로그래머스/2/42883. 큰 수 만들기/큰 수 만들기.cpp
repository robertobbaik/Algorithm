#include <string>
#include <vector>
#include <stack>

using namespace std;

string solution(string number, int k) {
    string answer = "";
    stack<char> s;
    
    for (char digit : number) {
        while (!s.empty() && s.top() < digit && k > 0) {
            s.pop(); // 더 작은 숫자는 제거
            k--;
        }
        s.push(digit);
    }
    
    // k개의 숫자를 다 제거하지 못한 경우 뒤에서 자르기
    while (k > 0) {
        s.pop();
        k--;
    }
    
    // 스택을 이용해 문자열 만들기
    while (!s.empty()) {
        answer = s.top() + answer;
        s.pop();
    }

    return answer;
}