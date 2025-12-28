#include<bits/stdc++.h>
#define ll long long

using namespace std;

ll check(ll mid,vector<ll>&arr){
    ll cnt=0;
    for(ll i=0;i<arr.size();i++){
        cnt+=mid/arr[i];
    }
    return cnt;
}

int main(){
    ll n,t;
    cin>>n>>t;
    vector<ll>arr(n);
    for(ll i=0;i<n;i++){
        cin>>arr[i];
    }
    ll l=*min_element(arr.begin(),arr.end());
    ll r=l*t;
    ll ans;
    while(l<=r){
        ll mid=(l+r)/2;
        if(check(mid,arr)>=t){
            ans=mid;
            r=mid-1;
        }else{
            l=mid+1;
        }
    }
    cout<<ans<<endl;
}