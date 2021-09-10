https://leetcode.com/problems/zigzag-conversion/

https://www.youtube.com/watch?v=wMpYkNGh9_o


class Solution {
public:
    string convert(string s, int numRows) {
      string ret;
        int n = s.size();
        int cycleLen = 2 * numRows - 2;
        if(numRows==1)
        return s;
            
        for (int i = 0; i < numRows; i++) {
            for (int j = 0; j + i < n; j += cycleLen) {
                ret += s[j + i];
           //     cout<<ret<<endl;
                if (i != 0 && i != numRows - 1 && j + cycleLen - i < n)
                    {
                    ret += s[j + cycleLen - i];
                   // cout<<"===="<<ret<<endl;
                    }
            }
        }
        return ret;}
};
