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
        ll target=x-arr[i].first;
        ll l=i+1;
        ll r=n-1;
        while(l<r){
            if((arr[l].first+arr[r].first)==target){
                cout<<arr[l].second<<" "<<arr[r].second<<" "<<arr[i].second;
                return 0;
            }
            if((arr[l].first+arr[r].first)<target){
                l++;
            }else r--;
        }
    }
    cout<<"IMPOSSIBLE";
}