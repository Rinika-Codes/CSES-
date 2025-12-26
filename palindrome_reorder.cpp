#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
    string s;
    cin>>s;
    ll n=s.size();
    vector<int>hash(26,0);
    for(ll i=0;i<n;i++){
        hash[s[i]-'A']++;
    }
    int cnt=0;
    for(int i=0;i<26;i++){
        if(hash[i]%2!=0) cnt++;
    }
    if(cnt>1){
        cout<<"NO SOLUTION"<<endl;
        return 0;
    }
    ll l=0;
    ll r=n-1;
    vector<char>ans(n);
    for(ll i=0;i<n;i++){
        if((hash[s[i]-'A'])%2==1){
            ans[n/2]=s[i];
            hash[s[i]-'A']--;
        }
        while(hash[s[i]-'A']>0){
            ans[l]=s[i];
            ans[r]=s[i];
            l++; r--;
            hash[s[i]-'A']-=2;
        }
    }
     for(auto it:ans){
            cout<<it;
        }
}