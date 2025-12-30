#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
    string s;
    cin>>s;
    string t="#";
    for(auto it:s){
        t+=it;
        t+='#';
    }
    ll n;
    n=t.size();
    vector<ll>p(n,1);
    ll l=1;
    ll r=1;
    ll maxlen=1;
    ll cen=0;
    for(int i=1;i<n;i++){
        
        p[i]=max(0LL,min(r-i,p[l+r-i]));
        
        while(i-p[i]>=0 && i+p[i]<n && t[i-p[i]]==t[i+p[i]]){
            p[i]++;
        }
        if((i+p[i])>r){
            r=i+p[i];
            l=i-p[i];
        }
        if(maxlen<p[i]){
            maxlen=p[i];
            cen=i;
        }
    }
    ll start=(cen-maxlen+1)/2;
    cout<<s.substr(start,maxlen-1)<<endl;
}
