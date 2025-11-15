#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
ll n;
cin>>n;
if(n<4 || n%2!=0){
    cout<<-1<<endl;
    return;
}
ll mAX=n/4;
ll mIN=ceil((n*1.0)/6);
cout<<mIN<<" "<<mAX<<endl;
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
}



}
