#include<bits/stdc++.h>
#define ll long long

using namespace std;

void dfs(ll x,vector<vector<ll>>&arr,vector<bool>&vis){
    vis[x]=1;
    for(auto it:arr[x]){
        if(!vis[it]){
            dfs(it,arr,vis);
        }
    }
}

int main(){
    ll n,m;
    cin>>n>>m;
    vector<vector<ll>>arr(n+1);
    vector<bool>vis(n+1,0);
    for(int i=0;i<m;i++){
        ll a,b;
        cin>>a>>b;
        arr[a].push_back(b);
        arr[b].push_back(a);
    }
    ll k=0;
    vector<ll>rep;
    for(int i=1;i<=n;i++){
        if(!vis[i]){
            k++;
            rep.push_back(i);
            dfs(i,arr,vis);
        }
    }
    cout<<k-1<<endl;
    for(ll i=0;i<rep.size()-1;i++){
        cout<<rep[i]<<" "<<rep[i+1]<<endl;
    }
}