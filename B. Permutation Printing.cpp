#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
ll n;
cin>>n;
ll l=1,r=n;
for(int i=1;i<=n;i++){
    if((i)%2==1){
       cout<<l<<" ";
       l++;
    }
    else{
        cout<<r<<" ";
        r--;
    }
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
