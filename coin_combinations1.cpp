#include<bits/stdc++.h>

using namespace std;

int main(){
    long long n,x;
    cin>>n>>x;
    vector<long long>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<long long>dp(x+1,0);

    dp[0]=1;
    long long mod=1000000007;
    
    for(int s=1;s<=x;s++){
        for(int i=0;i<n;i++){
        if(s-arr[i]>=0)
         dp[s]=(dp[s]+dp[s-arr[i]])%mod;   
        }
    }
   
    
    cout<<dp[x];
}