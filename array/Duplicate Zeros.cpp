question- https://leetcode.com/explore/learn/card/fun-with-arrays/525/inserting-items-into-an-array/3245/
solution- https://www.youtube.com/watch?v=k_eRj_QGSUg




class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int len=arr.size();
        int st=0,end=len-1;
      while(st<end)
       {
           if(arr[st]==0)
              end--;
          st++;  
       }

        for(int i=len-1;i>=0&&end>=0;i--,end--)
        {
            arr[i]=arr[end];
            if(st!=end && arr[i]==0)
            {
                arr[i-1]=0;
                i=i-1;
            }
        }
        
        
        
    }
};
