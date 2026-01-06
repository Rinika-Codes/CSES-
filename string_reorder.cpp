#include<bits/stdc++.h>
#define ll long long

using namespace std;

bool ispossible(map<char,int>&mpp,char c,ll n){
    char maxch=c;
    ll space=0;
    for(auto it:mpp){
        char ch=it.first;
        int freq=it.second;
        if(mpp[ch]>mpp[c]){
            maxch=ch;
        }
        space+=freq;
    }
        if((mpp[maxch]<=(space+1)/2) ) return true;
        return false;
}

int main(){
    string s;
    cin>>s;
    ll n;
    n=s.size();
    map<char,int>mpp;
    for(ll i=0;i<n;i++){
        mpp[s[i]]++;
    }
    string ans="";
    char lastch='\0';
    for(int i=0;i<n;i++){
        for(int j=0;j<26;j++){
            char c='A'+j;
            if(mpp[c]==0 || c==lastch) continue;
            mpp[c]--;
            if(ispossible(mpp,c,n)){
                ans+=c;
                lastch=c;
                break;
            }else{
                mpp[c]++;
            }
        }
    }
    if(ans.size()!=n) cout<<-1<<endl;
    else
    cout<<ans<<endl;
}