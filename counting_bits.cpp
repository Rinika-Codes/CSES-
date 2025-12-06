#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
    ll n;
    cin>>n;
    ll cnt=0;
    for(int i=0; (ll)pow(2,i)<=n;i++){
        ll mul=(ll)pow(2,i);
        ll dummy=(n/(ll)pow(2,i+1));
        cnt+=(dummy*(ll)pow(2,i));
        ll rem=n%(ll)pow(2,i+1);
        cnt+=max(0LL,rem-mul+1);
    }
    cout<<cnt;
}