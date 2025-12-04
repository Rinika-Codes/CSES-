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
        arr.push_back({a,1});
        arr.push_back({b,-1});
    }
        sort(arr.begin(),arr.end());
        long long cnt=0;
        long long maxcnt=0;
        for(int i=0;i<2*n;i++){
            cnt+=arr[i].second;
            maxcnt=max(maxcnt,cnt);
        }
        cout<<maxcnt<<endl;
    }  
