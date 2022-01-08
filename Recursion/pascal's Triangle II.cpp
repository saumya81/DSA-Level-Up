question link-> https://leetcode.com/problems/pascals-triangle-ii/

Given an integer rowIndex, return the rowIndexth (0-indexed) row of the Pascal's triangle.




class Solution {
public:
  
    vector<int> getRow(int rowIndex) {
     if(rowIndex==0)
         return {1};
    else
        {
            vector<int> prev=getRow(rowIndex-1);
            vector<int> ans;
            ans.push_back(prev[0]);
            for(int i=0;i<rowIndex-1;i++)
            {
                ans.push_back(prev[i]+prev[i+1]);
            }
            ans.push_back(prev[prev.size()-1]);
            return ans;
        }
    }
};
