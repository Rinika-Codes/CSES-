#include<bits/stdc++.h>
#define ll long long

using namespace std;

ll mod=1000000007;

vector<ll>fact(2000001,1);

void func(){
    for(ll i=1;i<2000001;i++){
    fact[i]=(i*fact[i-1])%mod;
}
}

ll inv(ll a,ll b){
    ll ans=1;
    while(b>0){
        if(b%2==1){
            ans=(ans*a)%mod;
        }
        a=(a*a)%mod;
        b=b/2;
    }
    return ans;
}

int main(){
    func();
    ll n,m;
    cin>>n>>m;
    ll up=(n+m-1);
    ll down=(n-1);
    ll ans=(fact[up])%mod;
    ll inv1=inv(fact[down],mod-2);
    ll inv2=inv(fact[up-down],mod-2);
    ans=(ans*inv1)%mod;
    ans=(ans*inv2)%mod;
    cout<<ans<<endl;
}