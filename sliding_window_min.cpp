#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
    long long n,k;
    cin>>n>>k;
    long long x,a,b,c;
    cin>>x>>a>>b>>c;
    vector<long long>arr(n);
    arr[0]=x;
    for(ll i=1;i<n;i++){
        arr[i]=((a*arr[i-1])+b)%c;
    }
    long long i=0;
    long long xorr=0;
    
    deque<pair<ll,ll>>q;

    for(ll j=0;j<n;j++){
        while(!q.empty() && q.back().first>arr[j]){
            q.pop_back();
        }
        q.push_back({arr[j],j});
        if(j-i+1<k){
            continue;
        }else{
            xorr=xorr^q.front().first;
            if(q.front().second==i){
                q.pop_front();
            }
            i++;
        }
    }
    cout<<xorr<<endl;
}