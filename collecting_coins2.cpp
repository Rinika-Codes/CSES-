#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
    ll n,m;
    cin>>n>>m;
    vector<ll>arr(n+1);
    vector<ll>pos(n+1);
    for(ll i=1;i<=n;i++){
        cin>>arr[i];
        pos[arr[i]]=i;
    }
    ll round=1;
   for(ll i=1;i<n;i++){
    if(pos[i+1]<pos[i])
        round++;
   }
   while(m--){
        ll a,b;
        cin>>a>>b;
        set<pair<ll,ll>>adj;
        if(arr[a]-1>0){
        adj.insert({arr[a]-1,arr[a]});
        }
        if(arr[a]+1<=n){
            adj.insert({arr[a],arr[a]+1});
        }
        if(arr[b]-1>0){
        adj.insert({arr[b]-1,arr[b]});
        }
        if(arr[b]+1<=n){
            adj.insert({arr[b],arr[b]+1});
        }
        for(auto it:adj){
            if(pos[it.first]>pos[it.second]) round--;
        }
        swap(arr[a],arr[b]);
        pos[arr[a]]=a;
        pos[arr[b]]=b;
        for(auto it:adj){
            if(pos[it.first]>pos[it.second]) round++;
        }
        cout<<round<<endl;
   }
}
