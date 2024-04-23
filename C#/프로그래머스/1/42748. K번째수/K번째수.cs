using System;

public class Solution {
    public int[] solution(int[] array, int[,] commands) {
        int rows = commands.GetLength(0);
        int[] answer = new int[rows];
        for(int i = 0; i < rows; ++i)
        {
            int start = commands[i, 0] - 1;
            int length = commands[i, 1] - commands[i, 0] + 1;
            int k = commands[i, 2];
            
            int[] newArray = new int[length];
            Array.Copy(array, start, newArray, 0, length);
            Array.Sort(newArray);
            answer[i] = newArray[k - 1];
        }
        return answer;
    }
}