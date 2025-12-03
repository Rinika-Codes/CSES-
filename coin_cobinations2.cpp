#include<bits/stdc++.h>

using namespace std;

int main(){
    long long n,x;
    cin>>n>>x;
    vector<long long>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int mod=1000000007;
    // vector<vector<long long>>dp(n,vector<long long>(x+1,0));

    vector<long long>prev(x+1,0);
    vector<long long>curr(x+1,0);
    // for(int i=0;i<n;i++){
    //     dp[i][0]=1;
    // }

    prev[0]=1;
    curr[0]=1;
    for(int s=0;s<=x;s++){
        if(s%arr[0]==0) prev[s]=1;
    }
    for(int i=1;i<n;i++){
       
        for(int s=1;s<=x;s++){
            long long take=0;
            if((s-arr[i])>=0){
            take=curr[s-arr[i]];
        }
        long long nottake=prev[s];
        curr[s]=(take+nottake)%mod;
    }
    prev=curr;
    }
    cout<<prev[x];
}