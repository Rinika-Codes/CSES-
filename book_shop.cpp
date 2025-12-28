#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
    ll n,x;
    cin>>n>>x;
    vector<ll>price(n);
    vector<ll>page(n);
    for(ll i=0;i<n;i++){
        cin>>price[i];
    }
    for(ll i=0;i<n;i++){
        cin>>page[i];
    }
    // vector<vector<ll>>dp(n,vector<ll>(x+1,0));
    vector<ll>prev(x+1,0);
    for(ll tar=0;tar<=x;tar++){
        if(price[0]<=tar){
            prev[tar]=page[0];
        }
    }
    for(ll i=1;i<n;i++){
        vector<ll>curr(x+1,0);
        for(ll tar=0;tar<=x;tar++){
            ll take=0;
            if(price[i]<=tar){
                take=page[i]+prev[tar-price[i]];
            }
            ll nottake=prev[tar];
            curr[tar]=max(take,nottake);
        }
        prev=curr;
    }
    cout<<prev[x]<<endl;
}