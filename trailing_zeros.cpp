#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
    ll n;
    cin>>n;
    ll pow5=5;
    ll cnt5=0;
    
    while(pow5<=n){
        cnt5+=n/pow5;
        pow5*=5;
    }
    ll cnt2=0;
    ll pow2=2;
    while(pow2<n){
        cnt2+=n/pow2;
        pow2*=2;
    }
    ll ans=min(cnt2,cnt5);
    cout<<ans<<endl;
}