question ->https://codeforces.com/problemset/problem/855/B#


#include <bits/stdc++.h>
using namespace std;
int main() {
    long long n,p,q,r;
    cin>>n>>p>>q>>r;
    long long a[n];
    for(long long i=0;i<n;i++)
    {
        cin>>a[i];
    }
    long long pMax[n],sMax[n];
    pMax[0]=p*a[0];
    for(long long i=1;i<n;i++)
    {
        pMax[i]=max(pMax[i-1],p*a[i]);
    }
    sMax[n-1]=r*a[n-1];
    for(long long i=n-2;i>=0;i--)
    {
        sMax[i]=max(sMax[i+1],r*a[i]);
       
    }
 
    long long maxi=LLONG_MIN;
    for(long long i=0;i<n;i++)
        maxi=max(maxi,((pMax[i])+(q*a[i])+(sMax[i])));
    cout<<maxi;
}
