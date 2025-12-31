#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
ll n;
cin>>n;
ll arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
sort(arr,arr+n);
bool flag=true;
for(int i=1;i<n-1;i=i+2){
    if(arr[i]!=arr[i+1]){
        flag=false;
        break;
    }
}

if(!flag) cout<<"NO"<<endl;
else cout<<"YES"<<endl;

}
int main(){
ll t;
cin>>t;
while(t--){
    solve();
}


}
