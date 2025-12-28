#include<bits/stdc++.h>
#define ll long long

using namespace std;

ll mod=1000000007;

ll expo(ll a,ll b){
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
    ll n;
    cin>>n;
    vector<pair<ll,ll>>arr(n);
    ll num=1;
    ll div=1;
    ll sum=1;
    for(ll i=0;i<n;i++){
        ll x;
        ll k;
        cin>>x>>k;
        arr[i].first=x;
        arr[i].second=k;
        div=(div*(k+1))%mod;
        num=(num*expo(x,k))%mod;
        ll up=expo(x,k+1)-1;
        ll down=x-1;
        ll inv=expo(down,mod-2);
        sum=(sum*up)%mod;
        sum=(sum*inv)%mod;
    }
   ll div2m=1;
bool isOdd=true;
for(ll i=0;i<n;i++){
    ll t=arr[i].second+1;
    div2m=(div2m*t)%(2*(mod-1));
    if(t%2==0)isOdd=false;
}

ll prd=1;
if(!isOdd){
    ll power=(div2m/2)%(mod-1);
    prd=expo(num,power);
}else{
    for(ll i=0;i<n;i++){
        ll p=arr[i].first,k=arr[i].second;
        ll exp=((k*((div2m-1)/2))%(mod-1)+(k/2))%(mod-1);
        prd=(prd*expo(p,exp))%mod;
    }
}




cout<<div<<" "<<sum<<" "<<prd<<endl;
}