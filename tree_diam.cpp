#include<bits/stdc++.h>
#define ll long long

using namespace std;

void dfs(ll node,ll parent,vector<vector<ll>>&adj,vector<ll>&dist,ll d){
    dist[node]=d;
    for(auto it:adj[node]){
        if(it!=parent){
            dfs(it,node,adj,dist,d+1);
        }
    }
}

int main(){
    ll n;
    cin>>n;
    vector<vector<ll>>adj(n+1);
    for(ll i=1;i<=n-1;i++){
        ll a;
        ll b;
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    vector<ll>dist(n+1);
    dfs(1,-1,adj,dist,0);
    ll x=1;
    for(ll i=1;i<=n;i++){
        if(dist[i]>dist[x]){
            x=i;
        }
    }
    dfs(x,-1,adj,dist,0);
    ll dia=0;
    for(ll i=1;i<=n;i++){
        dia=max(dia,dist[i]);
    }
    cout<<dia<<endl;
}