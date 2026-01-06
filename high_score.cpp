#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
    ll n,m;
    cin>>n>>m;
    vector<vector<ll>>adj;
    for(int i=0;i<m;i++){
        ll a,b,x;
        cin>>a>>b>>x;
        adj.push_back({a,b,-x});
    }
    vector<ll>dist(n+1,LLONG_MAX);
    dist[1]=0;
    for(int i=1;i<n;i++){
        for(auto it:adj){
            ll a=it[0];
            ll b=it[1];
            ll wt=it[2];
            if(dist[a]!=LLONG_MAX && dist[a]+wt<dist[b]){
                dist[b]=dist[a]+wt;
            }
        }
    }
    vector<ll>cycle(n+1,0);
    for(int i=0;i<n;i++){
        for(auto it: adj){
        ll a=it[0];
        ll b=it[1];
        ll wt=it[2];
        if(dist[a]!=LLONG_MAX && dist[a]+wt<dist[b]){
           cycle[b]=1;
           dist[b]=dist[a]+wt;
        }
        if(cycle[a]) cycle[b]=1;
    }
    }
    if(cycle[n]){
        cout<<-1;
        return 0;
    }
    cout<<-dist[n]<<endl;
}