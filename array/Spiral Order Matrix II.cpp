question-https://www.interviewbit.com/problems/spiral-order-matrix-ii/



vector<vector<int> > Solution::generateMatrix(int A) {
    int top=0,bottom=A-1,left=0,right=A-1;
    vector<vector<int>> ans( A , vector<int> (A, 0));
    int dir=0;
    int k=1;
    while(top<=bottom && left<=right )
    {
        if(dir==0)
        {
            for(int i=left;i<=right;i++)
            {
                ans[top][i]=k++;
            }
            top+=1;
        }
        else if(dir==1)
        {
            for(int i=top;i<=bottom;i++)
            {
                ans[i][right]=k++;
            }
            right-=1;
        }
         else if(dir==2)
        {
            for(int i=right;i>=left;i--)
            {
                ans[bottom][i]=k++;
            }
            bottom-=1;
        }
         else if(dir==3)
        {
            for(int i=bottom;i>=top;i--)
            {
                ans[i][left]=k++;
            }
            left+=1;
        }
        dir=(dir+1)%4;
    }
    return ans;
}
