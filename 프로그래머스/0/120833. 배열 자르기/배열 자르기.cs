using System;

public class Solution {
    public int[] solution(int[] numbers, int num1, int num2) {
             
        int[] answer = new int[(num2 + 1) - num1];
        
        for(int i = 0; i < answer.Length; i++)
        {
            answer[i] = numbers[num1];
            num1++;
        }
        
        return answer;
    }
}