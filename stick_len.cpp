#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
    ll n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    ll mid1,mid2;
    ll cost=0;
    ll cost1=0,cost2=0;
    if(n%2==0){
        mid1=n/2;
        for(int i=0;i<n;i++){
            cost+=abs(arr[i]-arr[mid1]);
        }
    }else{
        mid1=n/2;
        mid2=(n+1)/2;
        for(int i=0;i<n;i++){
            cost1+=abs(arr[i]-arr[mid1]);
            cost2+=abs(arr[i]-arr[mid2]);
            cost=min(cost1,cost2);
        }
    }
    cout<<cost<<endl;
}