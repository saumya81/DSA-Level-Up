Question=https://leetcode.com/problems/max-chunks-to-make-sorted/


class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        int n=arr.size();
        int pMax[n];
        pMax[0]=arr[0];
        for(int i=1;i<n;i++)
        {
            pMax[i]=max(pMax[i-1],arr[i]);
        }
        int c=0;
        for(int i=0;i<n;i++)
        {
            if(i==pMax[i])
                c++;
        }
        return c;
    }
};
