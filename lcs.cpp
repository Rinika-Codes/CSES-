#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
    ll n,m;
    cin>>n>>m;
    vector<int>arr(n);
    vector<int>brr(m);
    vector<int>ans;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<m;i++){
        cin>>brr[i];
    }
    vector<vector<int>>dp(n+1,vector<int>(m+1,0));
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(arr[i-1]==brr[j-1]){
                dp[i][j]=1+dp[i-1][j-1];
            }else{
                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
    }
    cout<<dp[n][m]<<endl;
    ll i=n;
    ll j=m;
    while(i>0 && j>0){
        if(arr[i-1]==brr[j-1]){
            ans.push_back(arr[i-1]);
            i--;
            j--;
        }
        else if(dp[i-1][j]>dp[i][j-1]){
            i--;
        }
        else{
            j--;
        }
    }
    int s=ans.size();
    reverse(ans.begin(),ans.end());
    for(int i=0;i<s;i++){
        cout<<ans[i]<<" ";
    }
}