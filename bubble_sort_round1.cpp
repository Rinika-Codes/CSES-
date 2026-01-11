#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
    ll n;
    cin>>n;
    vector<pair<ll,ll>>arr(n);
    for(ll i=0;i<n;i++){
        cin>>arr[i].first;
        arr[i].second=i;
    }
    sort(arr.begin(),arr.end());
    ll ans=0;
    for(ll i=0;i<n;i++){
        ans=max(ans,arr[i].second-i);
    }
    cout<<ans<<endl;
}