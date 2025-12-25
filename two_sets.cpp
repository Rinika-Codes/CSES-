#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
    ll n;
    cin>>n;
    ll sum=(n*(n+1))/2;
    if(sum&1) cout<<"NO"<<endl;
    else{
        ll sum1=sum/2;
        vector<ll>arr1;
        vector<ll>arr2;
        for(ll i=n;i>0;i--){
            if(sum1>=i){
                arr1.push_back(i);
                sum1-=i;
            }else{
                arr2.push_back(i);
            }
        }
        cout<<"YES"<<endl;
        cout<<arr1.size()<<endl;
        for(auto it:arr1){
            cout<<it<<" ";
        }
        cout<<endl;
        cout<<arr2.size()<<endl;
        for(auto it:arr2){
            cout<<it<<" ";
        }
    }
}