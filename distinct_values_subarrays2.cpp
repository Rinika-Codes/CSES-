#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
    ll n,k;
    cin>>n>>k;
    vector<ll>arr(n);
    for(ll i=0;i<n;i++){
        cin>>arr[i];
    }
    ll i=0;ll j=0;
    map<ll,ll>mpp;
    ll ans=0;
    while(j<n){
        mpp[arr[j]]++;
        while(mpp.size()>k){
            mpp[arr[i]]--;
            if(mpp[arr[i]]==0){
                mpp.erase(arr[i]);
            }
            i++;
        }
        ans+=(j-i+1);
        j++;
    }
    cout<<ans<<endl;
}