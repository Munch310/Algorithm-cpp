using System;
using System.Collections.Generic;

public class Solution {
    public int solution(int[] ingredient) {
        List<int> list = new List<int>();
        int answer = 0;
        foreach(int item in ingredient)
        {
            list.Add(item);
            if(list.Count >= 4)
            {
                int n = list.Count;
                if(list[n - 1] == 1 && list[n - 2] == 3 && list[n - 3] == 2 && list[n - 4] == 1)
                {
                    list.RemoveRange(n - 4, 4);
                    answer++;
                }
            }
            
        }
        
        return answer;
    }
}