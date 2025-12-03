#include<bits/stdc++.h>

using namespace std;

int main(){
    long long n,x;
    cin>>n>>x;

    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
   
    sort(arr.begin(),arr.end());
    long long cnt=0;
    long long l=0;
    long long h=n-1;
    while(l<=h){
        if(arr[l]+arr[h]<=x){
            l++;
            h--;
            cnt++;
        }else{
           h--;
           cnt++ ;
        }
    }
    cout<<cnt<<endl;
}