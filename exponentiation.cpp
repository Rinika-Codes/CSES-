#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
    ll n;
    cin>>n;
    ll mod=1000000007;
    while(n--){
        ll a;ll b;
        cin>>a>>b;
        ll ans=1;
        while(b>0){
            if(b%2!=0){
                ans=(ans*a)%mod;
            }
            b/=2;
            a=(a*a)%mod;
        }
        cout<<ans<<endl;
    }
}