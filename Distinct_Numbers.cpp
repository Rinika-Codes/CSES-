#include<bits/stdc++.h>

using namespace std;

int main(){
    long long n;
    cin>>n;
    vector<long long>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    int cnt=1;
    for(int i=1;i<n;i++){
        if(arr[i]==arr[i-1]) continue;
        cnt++;
    }
    cout<<cnt<<endl;
}