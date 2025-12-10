#include<bits/stdc++.h>
#define ll long long

using namespace std;
ll mod=1000000007;
ll func(ll a, ll b,ll m){
    ll res=1;
    while(b>0){
        if(b%2!=0){
            res=(res*a)%m;
        }
        a=(a*a)%m;
        b=b/2;
    }
    return res;
}
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll a,b,c;
        cin>>a>>b>>c;
        ll mid=func(b,c,mod-1);
        ll ans=func(a,mid,mod);
        cout<<ans<<endl;
    }
}