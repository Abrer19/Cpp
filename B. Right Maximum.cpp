#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
}
int cnt=0;
int maxi=-1e9;

for(int i=0;i<n;i++){
    if(a[i]>=maxi){
        cnt++;
        maxi=a[i];
    }
}

cout<<cnt<<endl;


}
int main(){
ll t;
cin>>t;
while(t--){
    solve();
}


}
