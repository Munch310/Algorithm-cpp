using System;
using System.Collections.Generic;

public class Solution {
    public int solution(int[] ingredient) {
        Stack<int> stack = new Stack<int>();
        int countBurgers = 0;

        foreach (int item in ingredient) {
            stack.Push(item);
            if (stack.Count >= 4) {
                int[] top = new int[4];
                bool match = true;
                int[] correctPattern = new int[] {1, 3, 2, 1};
                for (int i = 0; i < 4; i++) {
                    top[i] = stack.Pop();
                }
                for (int i = 0; i < 4; i++) {
                    if (top[i] != correctPattern[i]) {
                        match = false;
                    }
                }
                
                if (match) {
                    countBurgers++;
                } else {
                    for (int i = 3; i >= 0; i--) {
                        stack.Push(top[i]);
                    }
                }
            }
        }

        return countBurgers;
    }
}
