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
    string s;
    cin>>s;
    n=s.size();
    vector<ll>hash(26,0);
    for(ll i=0;i<n;i++){
        hash[s[i]-'a']++;
    }
    ll cnt=fact[n];
    for(ll i=0;i<26;i++){
        if(hash[i]!=0){
            ll inverse=inv(fact[hash[i]],mod-2);
            cnt=(cnt*inverse)%mod;
        }
    }
    cout<<cnt<<endl;
}