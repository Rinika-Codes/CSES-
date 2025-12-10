#include<bits/stdc++.h>

using namespace std;

vector<string>gray(int n){
    if(n==1) return {"0","1"};
    vector<string>prev=gray(n-1);
    vector<string>mirr;
    for(int i=prev.size()-1;i>=0;i--){
        mirr.push_back(prev[i]);
    }
    vector<string>ans;
    for(int i=0;i<prev.size();i++){
        ans.push_back("0"+prev[i]);
    }
    for(int i=0;i<mirr.size();i++){
        ans.push_back("1"+mirr[i]);
    }
    return ans;
}

int main(){
    int n;
    cin>>n;
    vector<string>arr=gray(n);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<endl;
    }
}