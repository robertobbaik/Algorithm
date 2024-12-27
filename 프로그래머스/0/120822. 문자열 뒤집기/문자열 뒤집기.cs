using System;

public class Solution {
    public string solution(string my_string) {
        char[] toChar = my_string.ToCharArray();
        Array.Reverse(toChar);
        
        string answer = new string(toChar);
        return answer;
    }
}