#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
    vector<ll>arr(10000001,0);
    for(ll i=1;i<=1000000;i++){
        for(ll j=i;j<=1000000;j+=i){
            arr[j]++;
        }
    }
    ll n;
    cin>>n;
    for(ll i=0;i<n;i++){
        ll x;
        cin>>x;
        cout<<arr[x]<<endl;
    }
}