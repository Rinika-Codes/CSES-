#include<bits/stdc++.h>

using namespace std;

int main(){
    long long n,k;
    cin>>n>>k;
    long long x,a,b,c;
    cin>>x>>a>>b>>c;
    vector<long long>arr(n);
    arr[0]=x;
    for(int i=1;i<n;i++){
        arr[i]=((a*arr[i-1])+b)%c;
    }
    long long sum=0;
    long long xorr=0;
    
    for(int j=0;j<k;j++){
        sum+=arr[j];
    }

    long long i=0;
    long long f=k-1;
    while(f<n){
        xorr=xorr^sum;
        sum-=arr[i];
        i++;
        f++;
        sum+=arr[f];
    }
    cout<<xorr<<endl;
}