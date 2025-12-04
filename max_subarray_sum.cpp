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
    ll sum=0;
    ll maxsum=INT_MIN;
    for(int i=0;i<n;i++){
        maxsum=max(maxsum,arr[i]);
    }
    for(int i=0;i<n;i++){
        sum+=arr[i];
        if(sum<0) sum=0;
        else maxsum=max(maxsum,sum);
    }
    cout<<maxsum<<endl;
}