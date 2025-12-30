#include<bits/stdc++.h>
#define ll long long

using namespace std;

void dfs(vector<ll>&sub,ll node,vector<vector<ll>>&adj){
    sub[node]=1;
    for(auto it:adj[node]){
        dfs(sub,it,adj);
        sub[node]+=sub[it];
    }
}

int main(){
    ll n;
    cin>>n;
    vector<vector<ll>>adj(n+1);
    for(ll i=2;i<=n;i++){
        ll boss;
        cin>>boss;
        adj[boss].push_back(i);
    }
    vector<ll>sub(n+1);
    dfs(sub,1,adj);
    for(ll i=1;i<=n;i++){
        cout<<sub[i]-1<<" ";
    }
}