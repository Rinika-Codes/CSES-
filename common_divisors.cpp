#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
    ll n;
    cin>>n;
    vector<ll>arr(n);
    vector<ll>array(1000001,0);
    for(ll i=0;i<n;i++){
        cin>>arr[i];
        array[arr[i]]++;
    }
    for(ll i=1000000;i>=1;i--){
        ll cnt=0;
        for(ll j=i;j<=1000000;j+=i){
            cnt+=array[j];
        }
        if(cnt>1){
            cout<<i<<endl;
            return 0;
        }
    }

}