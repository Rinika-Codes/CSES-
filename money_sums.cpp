#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
    ll n;
    cin>>n;
    vector<ll>arr(n);
    ll target=0;
    for(ll i=0;i<n;i++){
        cin>>arr[i];
        target+=arr[i];
    }
    vector<ll>ans;
    vector<vector<bool>>dp(n,vector<bool>(target+1,0));
    dp[0][0]=true;
    dp[0][arr[0]]=true;
    for(ll i=1;i<n;i++){
        for(ll tar=0;tar<=target;tar++){
            bool take=false;
            if((tar-arr[i])>=0){
                take=dp[i-1][tar-arr[i]];
            }
            bool nottake=dp[i-1][tar];
            dp[i][tar]=take||nottake;
        }
    }
    for(ll i=1;i<=target;i++){
        if(dp[n-1][i]==true){
            ans.push_back(i);
        }
    }
    cout<<ans.size()<<endl;
    for(ll i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}