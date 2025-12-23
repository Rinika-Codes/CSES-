#include<bits/stdc++.h>
#define ll long long

using namespace std;
bool possible=true;

void bfs(vector<vector<ll>>&arr,vector<bool>&vis,vector<ll>&grp, ll x){
    queue<ll>q;
    q.push(x);
    vis[x]=1;
    grp[x]=1;
    while(!q.empty() && possible){
        ll node=q.front();
        q.pop();
        for(auto adj:arr[node]){
            if(!vis[adj]){
                vis[adj]=1;
                if(grp[node]==1) grp[adj]=2;
                else grp[adj]=1;
                q.push(adj);
        }else if(grp[adj]==grp[node]){
            possible=false;
            break;
        }
    }
}
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
    vector<ll>grp(n+1);
    //bool possible=true;
    for(int i=1;i<=n;i++){
        if(!vis[i]) bfs(arr,vis,grp,i); 
    }
    if(!possible){
        cout<<"IMPOSSIBLE"<<endl;
        return 0;
    }else{
        for(int i=1;i<=n;i++){
            cout<<grp[i]<<" ";
        }
    }
}