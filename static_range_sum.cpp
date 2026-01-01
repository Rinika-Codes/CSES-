#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
    ll n,q;
    cin>>n>>q;
    vector<ll>arr(n);
    for(ll i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<ll>pref(n);
    pref[0]=arr[0];
    for(ll i=1;i<n;i++){
        pref[i]=arr[i]+pref[i-1];
    }
    while(q--){
        ll a,b;
        cin>>a>>b;
        a--;b--;
        ll ans=pref[b]-(a>=1?pref[a-1]:0);
        cout<<ans<<endl;
    }
}