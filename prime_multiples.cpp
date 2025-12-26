#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
    ll n,k;
    cin>>n>>k;
    vector<ll>primes(k);
    for(int i=0;i<k;i++){
        cin>>primes[i];
    }
    vector<ll>store(k+1,0);
    for(int mask=1;mask<(1<<k);mask++){
        ll temp=n;
        for(ll i=0;i<k;i++){
            if(mask&(1<<i)){
                temp/=primes[i];
            }
        }
        ll cnt=__builtin_popcount(mask);
        store[cnt]+=temp;
    }
    ll ans=0;
    for(ll i=1;i<=k;i++){
        if(i%2==1){
            ans+=store[i];
        }else{
            ans-=store[i];
        }
    }
    cout<<ans<<endl;
}