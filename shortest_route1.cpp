#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
    ll n,m;
    cin>>n>>m;
    vector<vector<pair<ll,ll>>>adj(n+1);
    for(ll i=0;i<m;i++){
        ll a,b,c;
        cin>>a>>b>>c;
        adj[a].push_back({b,c});
    }
    vector<ll>dist(n+1,LLONG_MAX);
    priority_queue<pair<ll,ll>,vector<pair<ll,ll>>,greater<pair<ll,ll>>>pq;
    dist[1]=0;
    pq.push({0,1});
    while(!pq.empty()){
        ll dis=pq.top().first;
        ll node=pq.top().second;
        pq.pop();
        if(dis>dist[node]) continue;
        for(auto it:adj[node]){
            ll adjnode=it.first;
            ll wt=it.second;
            if((dis+wt)<dist[adjnode]){
                dist[adjnode]=dis+wt;
                pq.push({dis+wt,adjnode});
            }
        }
    }
    for(int i=1;i<=n;i++){
        cout<<dist[i]<<" ";
    }
}