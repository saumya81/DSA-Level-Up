question- https://www.interviewbit.com/problems/sort-array-with-squares/


vector<int> Solution::solve(vector<int> &A) {
 
    int l=0,r=A.size()-1;
    int pnt=r;
       vector<int> ans(r+1);
    while(l<=r)
    {
        if(abs(A[l])>abs(A[r]))
        {
            ans[pnt]=A[l]*A[l];
        l++;
        }
        else 
        {
            ans[pnt]=A[r]*A[r];
       r--;
        }
        pnt--;
    }
    return ans;
}
