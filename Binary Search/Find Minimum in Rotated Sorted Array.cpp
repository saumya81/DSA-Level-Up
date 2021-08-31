class Solution {
public:
    int findMin(vector<int>& nums) {
         int l = 0,r = nums.size()-1;
        while(l<=r){
            int mid = (l+r)/2;
            if((mid==0 or nums[mid-1]>nums[mid]) and (mid+1==nums.size() or nums[mid]<nums[mid+1]))
                return nums[mid];
            if(nums[mid]>nums.back())
                l = mid + 1;
            else
                r = mid - 1;
        }
        return 0;
    }
};
