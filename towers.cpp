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
    multiset<ll>mul;
    ll cnt=0;
    for(ll i=0;i<n;i++){
        auto it=mul.upper_bound(arr[i]);
        if(it!=mul.end()){
            mul.erase(it);
            mul.insert(arr[i]);
        }else{
            mul.insert(arr[i]);
            cnt++;
        }
    }
    cout<<cnt<<endl;
}