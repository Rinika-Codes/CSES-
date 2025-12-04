#include<bits/stdc++.h>
# define ll long long

using namespace std;

bool hasDigit(int x,int d) {
    while (x>0) {
        if (x%10==d) return true;
        x/= 10;
    }
    return false;
}

int main(){
    int n;
    cin>>n;

    vector<vector<int>>dp(n+1,vector<int>(10,INT_MAX));
    for(int i=0;i<=9;i++){
        dp[0][i]=0;
    }
    for(int i=1;i<=n;i++){
        for(int d=1;d<=9;d++){
            dp[i][d]=dp[i][d-1];
            
        if(hasDigit(i,d) && i-d>=0) {
                dp[i][d]=min(dp[i][d],1+dp[i-d][9]);
            }
        }
    }
    cout<<dp[n][9]<<endl;
}