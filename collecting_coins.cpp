#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
    ll n;
    cin>>n;
    vector<int>arr(n);
    vector<int>brr(n+1);
    for(int i=0;i<n;i++){
        cin>>arr[i];
        brr[arr[i]]=i;
    }
    ll round=1;
   for(int i=1;i<n;i++){
    if(brr[i+1]<brr[i])
        round++;
   }
   cout<<round;
}