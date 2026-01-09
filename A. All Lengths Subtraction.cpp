#include<bits/stdc++.h>
using namespace std;
void solve(){
int n;
cin>>n;
vector<int>v(n);
for(int i=0;i<n;i++){
    cin>>v[i];
}
bool flag=true;
int i=0,j=n-1;
int curr=1;
while(curr<=n){
    if(v[i]==curr){
       curr++;
       i++;
       continue;
    }
    if(v[j]==curr){
        curr++;
        j--;
        continue;
    }
    flag=false;
    break;
}

if(flag) cout<<"YES"<<endl;
else cout<<"NO"<<endl;


}
int main(){
int t;
cin>>t;
while(t--){
    solve();
}

}
