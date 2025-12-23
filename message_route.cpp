#include<bits/stdc++.h>
#define ll long long

using namespace std;

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
    bool found=false;
    vector<ll>parent(n+1);
    parent[1]=-1;
    queue<ll>q;
    q.push(1);
    vis[1]=1;
    while(!q.empty() && !found){
        ll node=q.front();
        q.pop();
        for(auto adj:arr[node]){
            if(!vis[adj]){
            vis[adj]=1;
            parent[adj]=node;
            if(adj==n){
                found=true;
                break;
            }
            q.push(adj);
        }
        }
    }
    if(found==false){
        cout<<"IMPOSSIBLE"<<endl;
        return 0;
    }else{
        vector<ll>path;
        ll node=n;
        while(node!=-1){
            path.push_back(node);
            node=parent[node];
        }
        reverse(path.begin(),path.end());
        cout<<path.size()<<endl;
        for(int i=0;i<path.size();i++){
            cout<<path[i]<<" ";
        }
    }
}