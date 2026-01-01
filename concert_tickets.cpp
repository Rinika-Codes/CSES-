#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
    ll n,m;
    cin>>n>>m;
    multiset<ll>mul;
    for(ll i=0;i<n;i++){
        ll el;cin>>el;
        mul.insert(el);
    }
    vector<ll>arr(m);
    for(ll i=0;i<m;i++){
        cin>>arr[i];
    }
    for(ll i=0;i<m;i++){
        auto it=mul.upper_bound(arr[i]);
        if(it==mul.begin()){
            cout<<-1<<endl;
        }else{
            it--;
            cout<<*it<<endl;
            mul.erase(it);
        }
    }
}