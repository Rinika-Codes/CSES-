#include<bits/stdc++.h>
#define ll long long

using namespace std;

ll mod=1000000007;

vector<ll>dearr(1000001);

void func(){
    dearr[0]=1;
    dearr[1]=0;
    for(ll i=2;i<1000001;i++){
        dearr[i]=(dearr[i-1]+dearr[i-2])%mod;
        dearr[i]=(dearr[i]*(i-1))%mod;
    }
}

int main(){
    ll n;
    cin>>n;
    func();
    cout<<dearr[n]<<endl;
}