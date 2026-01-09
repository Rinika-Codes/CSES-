#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ll n;
    cin>>n;
    vector<pair<ll,ll>>arr(n);
    for(ll i=0;i<n;i++){
        ll a,d;
        cin>>a>>d;
        arr[i].first=a;
        arr[i].second=d;
    }
    sort(arr.begin(),arr.end());
    ll finish=0;
    ll ans=0;
    for(ll i=0;i<n;i++){
        auto it=arr[i];
        ll dur=it.first;
        ll dead=it.second;
        finish+=dur;
        ans+=(dead-finish);
    }
    cout<<ans<<endl;
}