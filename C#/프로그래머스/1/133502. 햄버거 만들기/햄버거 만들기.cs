using System;
using System.Collections.Generic;

public class Solution {
    public int solution(int[] ingredient) {
        List<int> stack = new List<int>();
        int countBurgers = 0;

        foreach (int item in ingredient) {
            stack.Add(item);
            if (stack.Count >= 4) {
                int n = stack.Count;
                if (stack[n - 1] == 1 && stack[n - 2] == 3 && stack[n - 3] == 2 && stack[n - 4] == 1) {
                    stack.RemoveRange(n - 4, 4);
                    countBurgers++;
                }
            }
        }

        return countBurgers;
    }
}
