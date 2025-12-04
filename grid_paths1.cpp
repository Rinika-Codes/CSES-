#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
    ll n;
    cin>>n;
    ll mod=1000000007;
    vector<vector<char>>arr(n,vector<char>(n));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    vector<vector<ll>>dp(n,vector<ll>(n,0));
    if(n==1 && arr[0][0]=='*') cout<<0;
    else{
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==0 && j==0) dp[0][0]=1;
            if (arr[i][j] == '*') continue;
             if(i>0 && arr[i-1][j]!='*') dp[i][j]=(dp[i][j]+dp[i-1][j])%mod;
             if(j>0 && arr[i][j-1]!='*') dp[i][j]=(dp[i][j]+dp[i][j-1])%mod; 
        }
    }
    cout<<dp[n-1][n-1];
}
}