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
    sort(arr.begin(),arr.end());
    ll maxt=arr[n-1];
    ll sum=0;
    for(ll i=0;i<n-1;i++){
        sum+=arr[i];
    }
    if(sum<=maxt){
        cout<<2*maxt<<endl;
    }else{
        cout<<maxt+sum<<endl;
    }
}