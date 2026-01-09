#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    vector<pair<int,int>>arr(n);
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        arr[i].first=b;
        arr[i].second=a;
    }
    sort(arr.begin(),arr.end());
    int ans=1;
    multiset<int>mul;
    mul.insert(arr[0].first);
    for(int i=1;i<n;i++){
        auto iter=arr[i];
        int end=iter.first;
        int start=iter.second;
        auto it=mul.upper_bound(start);
        if(it==mul.begin()){
            if(mul.size()<k){
                mul.insert(end);
                ans++;
            }
        }else{
            it--;
            mul.erase(it);
            mul.insert(end);
            ans++;
        }
    }
    cout<<ans<<endl;
}