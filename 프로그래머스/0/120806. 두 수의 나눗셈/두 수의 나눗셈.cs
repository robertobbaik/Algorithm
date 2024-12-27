using System;

public class Solution {
    public int solution(int num1, int num2) {
        float temp = (float)num1 / (float)num2;
        
        int answer = (int)(temp * 1000);
        
        return answer;
    }
}