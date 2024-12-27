using System;

public class Solution {
    public int solution(int angle) {
        int answer = 0;
        int quotient = angle / 90;
        int remainder = angle % 90;
        
        switch (quotient)
        {
            case 0: answer = 1;
                break;
            case 1: 
                answer = remainder == 0 ? 2 : 3;
                break;
            case 2:
                answer = 4;
                break;
        }
        
       
        return answer;
    }
}