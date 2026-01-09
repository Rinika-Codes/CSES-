#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<char>>grid(n,vector<char>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>grid[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            set<char>st;
            if(i-1>=0 && j>=0 && i-1<n && j<m ) st.insert(grid[i-1][j]);
            if(i>=0 && j-1>=0 && i<n && j-1<m ) st.insert(grid[i][j-1]);
            if(i>=0 && j>=0 && i<n && j<m ) st.insert(grid[i][j]);

            for(int k=0;k<4;k++){
                char c='A'+k;
                if(st.find(c)==st.end()){
                    grid[i][j]=c;
                    break;
                }
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<grid[i][j];
        }
        cout<<endl;
    }
}