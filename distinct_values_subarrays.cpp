#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
    ll n;
    cin>>n;
    vector<ll>arr(n);
    for(ll i=0;i<n;i++){
        cin>>arr[i];
    }
    ll i=0;ll r=0;
    map<ll,ll>mpp;
    ll ans=0;
    while(r<n){
        mpp[arr[r]]++;
        while(mpp[arr[r]]>1){
            mpp[arr[i]]--;
            if(mpp[arr[i]]==0){
                mpp.erase(arr[i]);
            }
            i++;    
        }
        ans+=(r-i+1);
        r++;
    }
    cout<<ans<<endl;
}