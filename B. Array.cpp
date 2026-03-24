#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
ll n;
cin>>n;
int a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
}
vector<int>ans(n,0);

for(int i=0;i<n-1;i++){
    int cnt1=0;
    int cnt2=0;
    for(int j=i+1;j<n;j++){

        if(a[i]>a[j]) cnt1++;
        else if(a[i]<a[j]) cnt2++;
    }
    ans[i]=max(cnt1,cnt2);
}

for(int i=0;i<n;i++){
  cout<<ans[i]<<" ";
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
