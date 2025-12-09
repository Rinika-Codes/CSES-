#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
    ll n,x;
    cin>>n>>x;
    vector<pair<ll,ll>>arr(n);
    for(ll i=0;i<n;i++){
        cin>>arr[i].first;
        arr[i].second=i+1;
    }
    sort(arr.begin(),arr.end());
    for(ll i=0;i<n;i++){
        for(ll j=i+1;j<n;j++){
        ll target=x-arr[i].first-arr[j].first;
        ll l=j+1;
        ll r=n-1;
        while(l<r){
            if((arr[l].first+arr[r].first)==target){
                cout<<arr[l].second<<" "<<arr[r].second<<" "<<arr[i].second<<" "<<arr[j].second;
                return 0;
            }
            if((arr[l].first+arr[r].first)<target){
                l++;
            }else r--;
        }
    }
    }
    cout<<"IMPOSSIBLE";
}