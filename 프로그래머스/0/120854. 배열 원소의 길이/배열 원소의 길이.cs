using System;

public class Solution {
    public int[] solution(string[] strlist) {
        int[] answer = new int[strlist.Length];
        
        for(int i = 0; i < strlist.Length; i++)
        {
            int strlen = strlist[i].Length;
            answer[i] = strlen;
        }
        return answer;
    }
}