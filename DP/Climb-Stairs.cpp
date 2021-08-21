https://leetcode.com/explore/featured/card/top-interview-questions-easy/97/dynamic-programming/569/

Similar to -Decode Ways (https://github.com/saumya81/DSA/blob/main/DP/DecodeWays.cpp)
                         
Input: n = 2
Output: 2
Explanation: There are two ways to climb to the top.
1. 1 step + 1 step
2. 2 steps


hint :To reach nth step, what could have been your previous steps? (Think about the step sizes)
 ----------------------------------------------------------
class Solution {
public:
    int climbStairs(int n) {
       int i_ways=1;
        int prev_iways=1;
        
        
        for(int i=1;i<=n;i++)
        {
           int prev=i_ways;
          
            if(i+1<=n)
                i_ways+=prev_iways;
            prev_iways=prev;
        }
        return i_ways;
    }
};
