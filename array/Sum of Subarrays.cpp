
question link-> https://practice.geeksforgeeks.org/problems/sum-of-subarrays2229/1


// finding in which all ranges a[i] will be there and then cominatrics formula to find the overall sum





class Solution{   
public:
    long long subarraySum(long long a[], long long n)
    {
        long long sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=((((i+1)*(n-i))%1000000007)*a[i])%1000000007;
        }
        return sum%1000000007;
    }
};
