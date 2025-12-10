#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
    ll n;
    cin>>n;
    vector<ll>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    stack<ll>st;
    vector<ll>ans(n);
    for(ll i=0;i<n;i++){
        while(!st.empty() && arr[st.top()]>=arr[i]){
            st.pop();
        }
        if(!st.empty()){
            ans[i]=st.top()+1;
        }else{
            ans[i]=0;
        }
        st.push(i);
    }
    for(ll i =0;i<n;i++){
        cout<<ans[i]<<" ";
    }
}