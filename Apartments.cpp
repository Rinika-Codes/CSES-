#include<bits/stdc++.h>

using namespace std;

int main(){
    long long n,m,k;
    cin>>n>>m>>k;
    vector<long long>arr(n);
    vector<long long>brr(m);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<m;i++){
        cin>>brr[i];
    }
    long long cnt=0;
    sort(arr.begin(),arr.end());
    sort(brr.begin(),brr.end());
    long long i=0,j=0;
    while(i<n && j<m){
       if(abs(arr[i]-brr[j])<=k){
        i++;
        cnt++;
        j++;
       }else if((arr[i]-brr[j])>k) j++;
       else if((brr[j]-arr[i])>k) i++;
    }
    cout<<cnt<<endl;
}