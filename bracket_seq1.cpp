#include<bits/stdc++.h>
#define ll long long

using namespace std;

ll mod=1000000007;

vector<ll>fact(1000001,1);

void func(){
    for(int i=1;i<1000001;i++){
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
    if(n%2==1){
        cout<<0<<endl;
        return 0;
    }
    ll k=n/2;
    ll ans=fact[n];
    ll inv1=inv(fact[k],mod-2);
    ll inv2=inv(fact[n-k],mod-2);
    ans=(ans*inv1)%mod;
    ans=(ans*inv2)%mod;
    ll inv3=inv(k+1,mod-2);
    ans=(ans*inv3)%mod;
    cout<<ans<<endl;
}