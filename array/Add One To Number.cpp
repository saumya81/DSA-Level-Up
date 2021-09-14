question : https://www.interviewbit.com/problems/add-one-to-number/

vector<int> Solution::plusOne(vector<int> &v) {
       int key=-1;
        int l=v.size()-1;
       
       
        
         while(key!=0)
           {
               if(v[l]==9&&l==0)
               {
                   v[l]=0;
                   v.insert(v.begin(),1);
                   key=0;
               }
            
               else if(v[l]==9)
               {
                   v[l]=0;
                   l--;   
               }
               else{
                   v[l]=v[l]+1;
               key=0;}
                   
           }
           l=v.size()-1;
            int k=0;
            
            //removing leading zeros
         if(l>=1){
        for(int i=0;i<=l;i++)
        {
            if(v[i]!=0)
                break;
            k++;
        }
        }
        v.erase(v.begin(),v.begin()+k);

        return v;
  
  
  



}
