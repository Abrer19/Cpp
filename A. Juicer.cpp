#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
ll n,k,d;
cin>>n>>k>>d;
ll arr[n];
ll sum=0,cnt=0;
for(int i=0;i<n;i++) cin>>arr[i];
for(int i=0;i<n;i++){
    if(arr[i]>k) continue;
    else {
        sum+=arr[i];
        if(sum>d) {
            cnt++;
            sum=0;
        }
    }
}
cout<<cnt<<endl;
}
int main(){

    solve();
}
