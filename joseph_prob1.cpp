#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
    ll n;
    cin>>n;
    set<ll>st;
    for(ll i=0;i<n;i++){
        st.insert(i+1);
    }
    auto it=st.begin();
    while(!st.empty()){
        it++;
        if(it==st.end()) it=st.begin();
        cout<<*it<<" ";
        it=st.erase(it);
        if(it==st.end()) it=st.begin();
    }
}