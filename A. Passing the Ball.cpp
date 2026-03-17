#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
int n;
cin>>n;
string s;
cin>>s;
int cnt=1;
for(int i=0;i<n;i++){
    if(s[i]=='R') {
        cnt++;
    }
    else break;
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
