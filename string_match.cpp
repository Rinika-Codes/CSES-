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
    string c;
    string t;
    cin>>c;
    cin>>t;
    string s=t+'#'+c;
    ll n=s.size();
    ll m=t.size();
    vector<ll>zarr(s.size(),0);
    zarr[0]=0;
    zalgo(s,zarr,n);
    ll ans=0;
    for(int i=0;i<s.size();i++){
        if(zarr[i]==m) ans++;
    }
    cout<<ans<<endl;
}