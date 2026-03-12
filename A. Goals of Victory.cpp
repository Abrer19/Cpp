#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
ll n;
cin>>n;
ll arr[n];
ll sum=0;
for(int i=0;i<n-1;i++) { cin>>arr[i];}
for(int i=0;i<n-1;i++) { sum+=arr[i];}
cout<<((sum)*-1)<<endl;

}
int main(){
ll t;
cin>>t;
while(t--){
    solve();
}

}
