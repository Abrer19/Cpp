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
vector<pair<int,int>>v(n);
for(int i=0;i<n;i++){
    if(i%2==0) {
        v[i].first=arr[i];
        v[i].second=1;
    }
    else {
        v[i].first=arr[i];
        v[i].second=-1;
    }
}

sort(v.begin(),v.end());
bool flag=true;
for(int i=0;i<n-1;i++){
    if(v[i].second+v[i+1].second==0){
        continue;
    }
    else {
        flag=false;
        break;
    }
}

if(!flag){
    cout<<"NO"<<endl;
}
else cout<<"YES"<<endl;
}
int main(){
int t;
cin>>t;
while(t--){
solve();

}

}
