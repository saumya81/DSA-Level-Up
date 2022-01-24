

question link->https://practice.geeksforgeeks.org/problems/minimum-swaps-required-to-bring-all-elements-less-than-or-equal-to-k-together4847/1#




class Solution
{
public:
    int minSwap(int nums[], int n, int k) {
        // Complet the function
         int cnt=0;
        int maxi=0;
        int l=0;
        
        for(int i=0;i<n;i++)
        {
            if(nums[i]<=k)
            l++;
        }
        for(int i=0;i<l;i++)
        {
            if(nums[i]<=k)
                cnt++;
        }
        for(int i=l;i<n;i++)
        {
              maxi=max(maxi,cnt);
            if(nums[i-l]<=k)
                cnt--;
            if(nums[i]<=k)
                cnt++;
        }
         maxi=max(maxi,cnt);

        return l-maxi;
    }
};
