#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
ll n,s,x;
cin>>n>>s>>x;
ll arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
ll sum=0;
for(int i=0;i<n;i++){
    sum+=arr[i];
}

if(sum>s){
    cout<<"NO"<<endl;
}
else if(sum==s){
    cout<<"YES"<<endl;
}
else {
    ll t=s-sum;
    if(t%x==0){
        cout<<"YES"<<endl;
    }
    else {
        cout<<"NO"<<endl;
    }
}



}
int main(){
int t;
cin>>t;
while(t--){
solve();

}

}
