
question-> https://leetcode.com/explore/learn/card/fun-with-arrays/527/searching-for-items-in-an-array/3250/




class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        unordered_set<int> us;
        for(int i=0;i<arr.size();i++)
        {
            if(us.find(arr[i]*2)!=us.end())
                {
                    return true;
                }
            if(arr[i]%2==0)
            {
                if(us.find(arr[i]/2)!=us.end())
                {
                    return true;
                }
            }
            us.insert(arr[i]);
        }
        return false;
    }
};
