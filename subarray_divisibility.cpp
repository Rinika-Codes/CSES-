#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
    ll n;
    cin>>n;
    vector<ll>arr(n);
    map<ll,ll>mpp;
    mpp[0]=1;
    for(ll i=0;i<n;i++){
        cin>>arr[i];
    }
    ll presum=0;
    ll rem;
    ll cnt=0;
    for(ll i=0;i<n;i++){
        presum+=arr[i];
        rem=((presum%n)+n)%n;
        cnt+=mpp[rem];
        mpp[rem]++;
    }
    cout<<cnt<<endl;
}