#include<bits/stdc++.h>
#define ll long long

using namespace std;

void toposort(vector<vector<ll>>&arr,vector<ll>&topo,vector<ll>&indeg,ll n){
    queue<ll>q;
   for(ll i=1;i<=n;i++){
    if(indeg[i]==0) q.push(i);
   }
   while(!q.empty()){
    ll node=q.front();
    q.pop();
    topo.push_back(node);
    for(auto it: arr[node]){
        indeg[it]--;
        if(indeg[it]==0) q.push(it);
    }
   }
}

int main(){
    ll n,m;
    cin>>n>>m;
    vector<vector<ll>>arr(n+1);
    vector<ll>indeg(n+1,0);
    for(ll i=0;i<m;i++){
        ll a,b;
        cin>>a>>b;
        arr[a].push_back(b);
        indeg[b]++; 
    }
    vector<ll>topo;
    toposort(arr,topo,indeg,n);
    if(topo.size()<n) cout<<"IMPOSSIBLE";
    else{
    for(ll i=0;i<n;i++){
        cout<<topo[i]<<" ";
    }
}
}