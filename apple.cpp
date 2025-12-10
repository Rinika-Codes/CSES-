#include<bits/stdc++.h>
#define ll long long

using namespace std;

void func(vector<ll>arr,ll g1,ll g2,ll ind,ll &ans){
    if(ind==arr.size()){
        ans=min(ans,abs(g1-g2));
        return;
    }
    func(arr,g1+arr[ind],g2,ind+1,ans);
    func(arr,g1,g2+arr[ind],ind+1,ans);
}

int main(){
    ll n;
    cin>>n;
    vector<ll>arr(n);
    for(ll i=0;i<n;i++){
        cin>>arr[i];
    }
    ll ans=INT_MAX;
    func(arr,0,0,0,ans);
    cout<<ans<<endl;
}