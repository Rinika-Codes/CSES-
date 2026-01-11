#include<bits/stdc++.h>
#include<math.h>
#define ll long long

using namespace std;

int main(){
    int q;
    cin>>q;
    while(q--){
        ll k;
        cin>>k;
        ll start=1;
        ll digit=1;
        ll cnt=9;
        while(k>start+cnt*digit-1){
            start=start+cnt*digit;
            digit++;
            cnt*=10;
        }
        ll initial=pow(10,digit-1);
        ll move=(k-start)/digit;
        ll num=initial+move;
        string s=to_string(num);
        ll pos=(k-start)%digit;
        cout<<s[pos]<<endl;
    }
}