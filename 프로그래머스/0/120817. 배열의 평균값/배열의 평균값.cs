using System;

public class Solution {
    public double solution(int[] numbers) {
        
        int temp = 0;
        
        for(int i = 0; i < numbers.Length; i++)
        {
            temp += numbers[i];
        }
        double answer = (double)temp / numbers.Length;
        return answer;
    }
}