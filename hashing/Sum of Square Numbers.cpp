Given a non-negative integer c, decide whether there're two integers a and b such that a2 + b2 = c.

 

Example 1:

Input: c = 5
Output: true
Explanation: 1 * 1 + 2 * 2 = 5

-------------------------------------------
class Solution {
public:
    bool judgeSquareSum(int c) {
        map<long long,long long> m;
        for(long long i=0;i<=sqrt(c);i++)
        {
           
            m[i*i]++;
             if(m.find(c-i*i)!=m.end())
            {
               return true; 
            }
        }
        return false;
    }
};
