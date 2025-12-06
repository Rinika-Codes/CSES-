#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
    ll n,x;
    cin>>n>>x;
    vector<ll>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    ll l=0;
    ll r=0;
    ll cnt=0;
    ll sum=0;
    while(r<n){
        sum+=arr[r];
        while(sum>x && l<=r){
            sum-=arr[l];
            l++;
        }
        if(sum==x) cnt++;
        r++;
    }
    cout<<cnt<<endl;
}

