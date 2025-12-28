#include<bits/stdc++.h>
#define ll long long

using namespace std;

ll mod=1000000007;

vector<ll>fact(1000001,1);

void func(){
    for(ll i=1;i<1000001;i++){
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
    ll n;
    cin>>n;
    for(ll i=0;i<n;i++){
        ll a,b;
        cin>>a>>b;
        ll ans=fact[a];
        ll inv1=inv(fact[b],mod-2);
        ll inv2=inv(fact[a-b],mod-2);
        ans=(ans*inv1)%mod;
        ans=(ans*inv2)%mod;
        cout<<ans<<endl;
    }
}