#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
    ll n;
    cin>>n;
    vector<ll>arr(n);
    for( ll i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<vector<ll>>dp(n,vector<ll>(n,0));
    
    for(ll i=0;i<n;i++){
        dp[i][i]=arr[i];
        if(i+1<n){
            dp[i][i+1]=max(arr[i],arr[i+1]);
        }
    }

    for(ll l=3;l<=n;l++){
        for(ll i=0;i+l-1<n;i++){
            ll j=i+l-1;
            dp[i][j]=max(arr[i]+min(dp[i+2][j],dp[i+1][j-1]), arr[j]+min(dp[i+1][j-1],dp[i][j-2]));
        }
    }
    cout<<dp[0][n-1]<<endl;
}