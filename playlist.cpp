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
    map<ll,ll>mpp;
    ll l=0;
    ll r=0;
    ll cnt=0;
    ll maxcnt=0;
    while(r<n){
        if(mpp.find(arr[r])!=mpp.end()){
            l=max(l,mpp[arr[r]]+1);
            mpp[arr[r]]=r;
        }else{
            mpp[arr[r]]=r;
        }
        cnt=r-l+1;
        maxcnt=max(cnt,maxcnt);
        r++;
    }
    cout<<maxcnt;
}