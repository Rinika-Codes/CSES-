#include<bits/stdc++.h>

using namespace std;

int main(){
    long long n;
    cin>>n;
    vector<long long>arr(n-1);
    long long sum=0;
    for(int i=0;i<n-1;i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    long long thsum=n*(n+1);
    thsum/=2;
    cout<<thsum-sum<<endl;
}