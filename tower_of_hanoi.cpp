#include<bits/stdc++.h>

using namespace std;

void func(int left,int right,int aux,int n){
    if(n==1){
        cout<<left<<" "<<right<<endl;
        return;
    }
    func(left,aux,right,n-1);
    cout<<left<<" "<<right<<endl;
    func(aux,right,left,n-1);

}

int main(){
    int n;
    cin>>n;
    cout<<(1<<n)-1<<endl;
    func(1,3,2,n);
}