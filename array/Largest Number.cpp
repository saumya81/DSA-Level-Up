
  static bool compy(int a, int b) {
        string x = to_string(a), y = to_string(b);
        string s1 = x+y, s2 = y+x;
        return s1 > s2;
    }
string Solution::largestNumber(const vector<int> &A) {
    string s;
    vector<int> nums=A;
    string ans = "";

    sort(nums.begin(),nums.end(),compy);
    for(int i=0; i<nums.size(); ++i) {
            if(ans == "" && nums[i] == 0) continue;
            ans += to_string(nums[i]);
        }
        return ans == "" ? "0" : ans;
}
