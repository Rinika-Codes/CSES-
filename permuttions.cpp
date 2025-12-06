#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
    ll n;
    cin>>n;
    if(n==1){
        cout<<1;
        return 0;
    }
    if(n>1 && n<4){
        cout<<"NO SOLUTION";
        return 0;
    }if(n==4){
        cout<<2<<" "<<4<<" "<<1<<" "<<3;
        return 0;
    }
    vector<ll>arr(n);
    ll ind=0;
    for(int i=0;i<n;i++){
        if(ind>=n){
            ind=1;
            arr[ind]=i+1;
            ind+=2;
        }else{
        arr[ind]=i+1;
        ind+=2;
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}