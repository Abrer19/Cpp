#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
ll n;
cin>>n;
ll i=1;
while(n%i==0) i++;
cout<<i-1<<"\n";
}
int main(){
ll t;
cin>>t;
while(t--){
    solve();
}

}
