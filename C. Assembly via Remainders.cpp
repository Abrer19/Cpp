#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
ll n;
cin>>n;
ll arr[n];
for(int i=0;i<n-1;i++){
    cin>>arr[i];
}
arr[n-1]=1e9;
for(int i=n-2;i>=0;i--){
    arr[i]=arr[i+1]-arr[i];
}

for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
cout<<endl;

}
int main(){
ll t;
cin>>t;
while(t--){
    solve();
}


}
