#include<bits/stdc++.h>

using namespace std;

int main(){
    long long n;
    cin>>n;
    vector<pair<long long,long long>>arr;
    for(int i=0;i<n;i++){
        long long a;
        long long b;
        cin>>a;
        cin>>b;
        arr.push_back({a,b});
    }
        sort(arr.begin(),arr.end(),[](auto &a,auto& b){
            return a.second<b.second;
        });
        long long last=-1;
        long long ans=0;
        for(int i=0;i<n;i++){
            if(arr[i].first>=last){
            ans++;
            last=arr[i].second;
            }
        }
        cout<<ans<<endl;
    }  
