#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
    ll n;
    cin>>n;
    vector<ll>arr;
    for(ll i=0;i<n;i++){
        ll el;cin>>el;
        auto it=lower_bound(arr.begin(),arr.end(),el);
        if(it==arr.end()){
            arr.push_back(el);
        }else{
            *it=el;
        }
    }
    cout<<arr.size()<<endl;
}