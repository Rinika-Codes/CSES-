#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
    ll n,x;
    cin>>n>>x;
    vector<ll>arr(n);
    for(ll i=0;i<n;i++){
        cin>>arr[i];
    }
    map<ll,ll>mpp;
    mpp[0]=1;
    ll sum=0;
    ll cnt=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        if(mpp.find(sum-x)!=mpp.end()){
            cnt+=mpp[sum-x];
        }
            mpp[sum]++;
    }
    cout<<cnt<<endl;
}