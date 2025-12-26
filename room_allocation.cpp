#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
    ll n;
    cin>>n;
    vector<pair<pair<ll,ll>,ll>>arr(n);
    for(ll i=0;i<n;i++){
        ll a,b;
        cin>>a>>b;
        arr[i].first.first=a;
        arr[i].first.second=b;
        arr[i].second=i;
    }
    priority_queue<pair<ll,ll>,vector<pair<ll,ll>>,greater<pair<ll,ll>>>q;
    ll cnt=0;
    vector<ll>ans(n);
    sort(arr.begin(),arr.end());
    for(ll i=0;i<n;i++){
        ll start=arr[i].first.first;
        ll end=arr[i].first.second;
        ll ind=arr[i].second;
        if(!q.empty() && q.top().first<start){
            auto it=q.top();
            q.pop();
            ans[ind]=it.second;
            q.push({end,it.second});
        }else{
            cnt++;
            ans[ind]=cnt;
            q.push({end,cnt});
        }
    }
    cout<<cnt<<endl;
    for(ll i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
}