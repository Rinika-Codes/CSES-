#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
    ll n;
    cin>>n;
    for(ll i=1;i<=n;i++){
        ll total=i*i;
        ll poss=(total)*(total-1);
        poss/=2;
        ll minus=2*(i-1)*(i-2)*2;
        ll ans=poss-minus;
        cout<<ans<<endl;
    }
}