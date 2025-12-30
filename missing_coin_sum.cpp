#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
    ll n;
    cin>>n;
    vector<ll>arr(n);
    for(ll i=0;i<n;i++){
        cin>>arr[i];
    }
    ll sum=1;
    sort(arr.begin(),arr.end());
    for(ll i=0;i<n;i++){
        if(arr[i]>sum){
            cout<<sum;
            return 0;
        }
        sum+=arr[i];
    }
    cout<<sum;
}