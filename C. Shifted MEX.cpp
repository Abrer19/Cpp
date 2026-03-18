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

sort(a,a+n);
int cnt=1;
int ans=1;
for(int i=0;i<n-1;i++){
    if(a[i]==a[i+1]){
        ans=max(ans,cnt);
        continue;
    }
    else if(a[i]+1==a[i+1]){
        cnt++;
        ans=max(ans,cnt);

    }
    else {
        cnt=1;
    }
}

cout<<ans<<endl;

}
int main(){
ll t;
cin>>t;
while(t--){
    solve();
}


}
