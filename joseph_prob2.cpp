#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
#define ll long long

using namespace std;
using namespace __gnu_pbds;
typedef tree<
    int,
    null_type,
    less<int>,
    rb_tree_tag,
    tree_order_statistics_node_update
> pbds;

int main(){
    ll n,k;
    cin>>n>>k;
    pbds st;
    for(ll i=0;i<n;i++){
        st.insert(i+1);
    }
    ll ind=0;
    while(!st.empty()){
        ind=(ind+k)%st.size();
        auto it=st.find_by_order(ind);
        cout<<*it<<" ";
        st.erase(it);
    }
}