using System;

public class Solution {
    public int solution(int[] numbers) {
        
        int maxNum = 0;
        int secondMaxNum = 0;
        for(int i = 0; i < numbers.Length; i++)
        {
            if(maxNum < numbers[i])
            {
                secondMaxNum = maxNum;
                maxNum = numbers[i];
            }
            else if(secondMaxNum < numbers[i])
            {
                secondMaxNum = numbers[i];
            }
        }
        
        int answer = maxNum * secondMaxNum;
        return answer;
    }
}