#include<bits/stdc++.h>
#define ll long long

using namespace std;

ll mod=1000000007;
const ll inv=500000004;

int main(){
    ll n;
    cin>>n;
    ll d=1;
    ll ans=0;
    while(d<=n){
        ll q=n/d;
        ll right=n/q;
        ll left=d;
        ll sum=((left+right)%mod*inv)%mod;
        sum=(sum*((right-left+1)%mod))%mod;
        ans=((ans)%mod+((q%mod)*sum)%mod)%mod;
        d=right+1;
    }
    cout<<ans%mod;
}