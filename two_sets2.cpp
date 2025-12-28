#include<bits/stdc++.h>
#define ll long long

using namespace std;

ll mod=1000000007;
ll inv=500000004;

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    int sum=0;
    for(int i=0;i<n;i++){
        arr[i]=i+1;
        sum+=arr[i];
    }
    if(sum%2==1){
        cout<<0<<endl;
        return 0;
    }
    int target=sum/2;
    // vector<vector<int>>dp(n,vector<int>(target+1,0));
    vector<int>dp(target+1,0);
    dp[0]=1;
    dp[arr[0]]=1;
    for(int i=1;i<n;i++){
        for(int tar=target;tar>=arr[i];tar--){
            dp[tar]=(dp[tar]+dp[tar-arr[i]])%mod;
        }
    }
    cout<<(dp[target]*inv)%mod<<endl;
}