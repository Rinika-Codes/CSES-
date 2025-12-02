#include<bits/stdc++.h>

using namespace std;

int main(){
    long long n;
    long long x;
    cin>>n>>x;
    vector<long long>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int inf=100000000;
    //vector<vector<long long>>dp(n,vector<long long>(x+1,inf));

    vector<long long>prev(x+1,inf);
    vector<long long>curr(x+1,inf);

    for(long long s=0;s<=x;s++){
        if((s%arr[0])==0){
            prev[s]=s/arr[0];
            curr[s]=s/arr[0];
        }
    }
    // for(int i=0;i<n;i++){
    //     dp[i][0]=0;
    // }

    prev[0]=0;
    curr[0]=0;

    for(long long i=1;i<n;i++){
        for(long long sum=1;sum<=x;sum++){
            long long take=inf;
            if(sum-arr[i]>=0){
                take=1+curr[sum-arr[i]];
            }
            long long nottake=0+prev[sum];
            curr[sum]=min(take,nottake);
        }
        prev=curr;
    }
    if(prev[x]==inf) cout<<-1<<endl;
    else cout<<prev[x]<<endl;
}