#include<bits/stdc++.h>

#define ll long long

using namespace std;

int main(){
    ll n;
    cin>>n;
    ll mod=1000000007;
    ll ans=1;
    for(int i=0;i<n;i++){
        ans*=2;
        ans%=mod;
    }
    cout<<ans;
}