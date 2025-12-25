#include<bits/stdc++.h>
#define ll long long

using namespace std;

void zalgo(string s,vector<ll>&zarr,ll n){
    ll l=0,r=0;
    for(int i=1;i<s.size();i++){
        if(i<=r){
            ll k=i-l;
            zarr[i]=min(r-i+1,zarr[k]);
        }
        while(i+zarr[i]<n && s[zarr[i]]==s[i+zarr[i]]){
            zarr[i]++;
        }
        if(i+zarr[i]-1>r){
            l=i;
            r=i+zarr[i]-1;
        }
    }
}

int main(){
    string s;
    cin>>s;
    ll n;
    n=s.size();
    vector<ll>zarr(n,0);
    zalgo(s,zarr,n);
    vector<ll>ans;
    for(ll i=0;i<n;i++){
        if((i+zarr[i])==n) ans.push_back(zarr[i]);
    }
    sort(ans.begin(),ans.end());
    for(auto it:ans) cout<<it<<" ";
}