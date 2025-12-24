#include<bits/stdc++.h>
#define ll long long

using namespace std;

ll mod=1000000007;

struct Matrix{
    ll a,b,c,d;
};

struct Matrix multiply(struct Matrix m,struct Matrix n){
    struct Matrix ans;
    ans.a=(m.a*n.a+m.b*n.c)%mod;
    ans.b=(m.a*n.b+m.b*n.d)%mod;
    ans.c=(m.c*n.a+m.d*n.c)%mod;
    ans.d=(m.c*n.b+m.d*n.d)%mod;
    return ans;
}

int main(){
    ll n;
    cin>>n;
    if(n==0){
        cout<<0;
        return 0;
    }
    if(n==1){
        cout<<1;
        return 0;
    }
    Matrix pref={1,1,1,0};
    Matrix iden={1,0,0,1};
    ll m=n-1;
    while(m>0){
        if(m%2!=0){
            iden=multiply(iden,pref);
        }
            pref=multiply(pref,pref);
            m/=2;
    }
    cout<< (iden.a) <<endl;
}