
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
ll maxi=0;
for(int i=0;i<n;i++){
    maxi=max(maxi,arr[i]);
}

cout<<n*maxi<<endl;
}
int main(){
ll t;
cin>>t;
while(t--){
    solve();
}

}
