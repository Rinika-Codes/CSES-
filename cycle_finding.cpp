#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
    ll n,m;
    cin>>n>>m;
    vector<vector<ll>>adj;
    for(int i=0;i<m;i++){
        ll a,b,c;
        cin>>a>>b>>c;
        adj.push_back({a,b,c});
    }
    vector<ll>dist(n+1,0);
    vector<ll>parent(n+1);
    dist[1]=0;
    ll lastup=-1;
    for(int i=1;i<=n;i++){
        lastup=-1;
        for(auto it:adj){
            ll a=it[0];
            ll b=it[1];
            ll wt=it[2];
            if(dist[a]+wt<dist[b]){
                dist[b]=dist[a]+wt;
                parent[b]=a;
                lastup=b;
            }
        }
    }
    if(lastup==-1){
        cout<<"NO"<<endl;
        return 0;
    }
    cout<<"YES"<<endl;
    vector<ll>cycle;
    for(int i=0;i<n;i++){
        lastup=parent[lastup];
    }
    ll curr=parent[lastup];
    cycle.push_back(lastup);
    while(curr!=lastup){
        cycle.push_back(curr);
        curr=parent[curr];
    }
    cycle.push_back(curr);
    reverse(cycle.begin(),cycle.end());
    for(auto it: cycle){
        cout<<it<<" ";
    }
}