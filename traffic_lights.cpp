#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
    ll x,n;
    cin>>x>>n;
    vector<ll>arr(n);
    for(ll i=0;i<n;i++){
        cin>>arr[i];
    }
    multiset<ll>mul;
    set<pair<ll,ll>>st;
    mul.insert(x);
    st.insert({0,x});
    vector<ll>ans;
    for(ll i=0;i<n;i++){
        ll p=arr[i];
        auto it=st.upper_bound({arr[i],LLONG_MAX});      
        it--;
        ll l=it->first;
        ll r=it->second;
        st.erase({l,r});
        st.insert({l,p});
        st.insert({p,r});
        mul.erase(mul.find(r-l));
        mul.insert((p-l));
        mul.insert((r-p));
        ans.push_back(*mul.rbegin());
    }
    for(ll i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}