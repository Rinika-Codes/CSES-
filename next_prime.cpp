#include<bits/stdc++.h>
#include<math.h>
#define ll long long

using namespace std;

bool isprime(ll n){
    if(n==2) return true;
    if(n==1) return false;
    if(n%2==0) return false;
    for(ll i=3;i*i<=n;i+=2){
        if((n%i)==0) return false;
    }
    return true;
}
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        if(n==1){
            cout<<2<<endl;
            continue;
        }
        if(n%2==1) n+=2;
        else n+=1;
        while(!isprime(n)){
            n+=2;
        }
        cout<<n<<endl;
    }
}