#include<bits/stdc++.h>

using namespace std;

vector<int>fact(9,1);

void func(){
    for(int i=1;i<=8;i++){
    fact[i]=i*fact[i-1];
}
}

string next_per(string s,int n){
    int ind=-1;
    for(int i=n-2;i>=0;i--){
        if(s[i]<s[i+1]){
            ind=i;
            break;
        }
    }
    if(ind==-1){
        reverse(s.begin(),s.end());
        return s;
    }
    for(int i=n-1;i>ind;i--){
        if(s[i]>s[ind]){
            swap(s[i],s[ind]);
            break;
        }
    }
    sort(s.begin()+ind+1,s.end());
    return s;
}

int main(){
    func();
    int n;
    string s;
    cin>>s;
    n=s.size();
    sort(s.begin(),s.end());
    string t=s;
    t=next_per(t,n);
    vector<int>hash(26,0);
    for(int i=0;i<n;i++){
        hash[s[i]-'a']++;
    }
    int cnt=fact[n];
    for(int i=0;i<26;i++){
        cnt=cnt/fact[hash[i]];
    }
    cout<<cnt<<endl;
    cout<<s<<endl;
    while(t!=s){
        cout<<t<<endl;
        t=next_per(t,n);
    }
}