using System;

public class Solution {
    public int[] solution(int[] num_list) {
        
        int len = num_list.Length % 2 == 0 ? len = num_list.Length / 2 : len = num_list.Length / 2 + 1;
        
        int[] answer = new int[num_list.Length];
        
        for(int i = 0; i < len; i++)
        {
            int temp = 0;
            int swapIdx = (num_list.Length - 1) - i;
            if(swapIdx == i)
            {
                answer[i] = num_list[i];
            }
            else
            {
                 temp = num_list[i];
                answer[i] = num_list[swapIdx];
                answer[swapIdx] = temp;
            }
        } 
        return answer;
    }
}