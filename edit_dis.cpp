#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
    string s,r;
    cin>>s>>r;
    ll n=s.size();
    ll m=r.size();
    vector<vector<ll>>dp(n+1,vector<ll>(m+1,0));
    for(ll j=0;j<=m;j++){
        dp[0][j]=j;
    }
    for(ll i=0;i<=n;i++){
        dp[i][0]=i;
    }
    for(ll i=1;i<=n;i++){
        for(ll j=1;j<=m;j++){
            if(s[i-1]==r[j-1]){
                dp[i][j]=dp[i-1][j-1];
            }else{
                dp[i][j]=1+min(dp[i-1][j-1],min(dp[i][j-1],dp[i-1][j]));
            }
        }
    }
    ll l=dp[n][m];
    cout<<l<<endl;
}