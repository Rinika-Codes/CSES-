#include<bits/stdc++.h>
#define ll long long

using namespace std;

ll start=-1;
ll lastn=-1;

bool dfs(ll node,ll par,vector<bool>&vis,vector<vector<ll>>&arr,vector<ll>&parent,ll n){
    vis[node]=1;
    parent[node]=par;
    for(ll it:arr[node]){
        if(!vis[it]){
            if(dfs(it,node,vis,arr,parent,n)==true) return true;
        }else if(it!=par){
            start=it;
            lastn=node;
            return true;
        }
    }
    return false;
}

int main(){
    ll n,m;
    cin>>n>>m;
    vector<vector<ll>>arr(n+1);
    for(int i=0;i<m;i++){
        ll a,b;
        cin>>a>>b;
        arr[a].push_back(b);
        arr[b].push_back(a);
    }
    vector<bool>vis(n+1,0);
    vector<ll>parent(n+1);
    for(ll i=1;i<=n;i++){
        if(!vis[i]){
            if(dfs(i,-1,vis,arr,parent,n)==true) break;;
        }
    }
    if(start==-1){
         cout<<"IMPOSSIBLE";
         return 0;
    }
    ll curr=lastn;
    vector<ll>path;
    path.push_back(start);
    while(curr!=start){
        path.push_back(curr);
        curr=parent[curr];
    }
    path.push_back(start);
    reverse(path.begin(),path.end());
    cout<<path.size()<<endl;
    for(auto it:path){
        cout<<it<<" ";
    }
}