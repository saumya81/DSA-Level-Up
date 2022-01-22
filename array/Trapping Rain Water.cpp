
Question -> https://leetcode.com/problems/trapping-rain-water/


class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        int pMax[n];
        int sMax[n];
        pMax[0]=height[0];
        sMax[n-1]=height[n-1];
        int sum=0;
        for(int i=1;i<n;i++)
        {
            pMax[i]=max(pMax[i-1],height[i]);
        }
        for(int i=n-2;i>=0;i--)
        {
            sMax[i]=max(sMax[i+1],height[i]);
        }
        for(int i=1;i<n-1;i++)
        {
            sum+=min(pMax[i],sMax[i])-height[i];
        }
        return sum;
        
    }
};
