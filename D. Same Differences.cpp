#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
ll n;
cin>>n;
vector<ll>v(n);
for(int i=0;i<n;i++){
    cin>>v[i];
}

for(int i=0;i<n;i++){
   v[i]=v[i]-i;
}
sort(v.begin(),v.end());
ll cnt=0,sum=0;

for(int i=0;i<n-1;i++){
    if(v[i]==v[i+1]){
        cnt++;
        sum+=cnt;
    }
    else{
        cnt=0;
    }
}
cout<<sum<<endl;
}
int main(){
ll t;
cin>>t;
while(t--){
    solve();
}


}


