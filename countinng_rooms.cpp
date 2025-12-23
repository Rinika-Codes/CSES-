#include<bits/stdc++.h>
#define ll long long

using namespace std;

void dfs(ll x, ll y, vector<vector<char>>&arr,vector<vector<bool>>&vis,ll n,ll m){
    vis[x][y]=1;
    vector<ll>delrow={0,-1,0,+1};
    vector<ll>delcol={-1,0,+1,0};
    for(int i=0;i<4;i++){
            ll nrow=x+delrow[i];
            ll ncol=y+delcol[i];
            if(nrow<n && nrow>=0 && ncol<m && ncol>=0 && arr[nrow][ncol]=='.' && !vis[nrow][ncol]){
                dfs(nrow,ncol,arr,vis,n,m);
        }
    }
}

int main(){
    ll n,m;
    cin>>n>>m;
    ll rooms=0;
    vector<vector<char>>arr(n,vector<char>(m,0));
    vector<vector<bool>>visited(n,vector<bool>(m,0));
    for(ll i=0;i<n;i++){
        for(ll j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j]=='.' && !visited[i][j]){
                rooms++;
                dfs(i,j,arr,visited,n,m);
            }
        }
    }
    cout<<rooms<<endl;
}