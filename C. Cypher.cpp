#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
ll n;
cin>>n;
ll a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
}
for(int i=0;i<n;i++){
    int p;
    string s;
    cin>>p;
    cin>>s;
    for(int j=0;j<p;j++){
        if(s[j]=='U') a[i]--;
        else a[i]++;
        if(a[i]>9) { a[i]=0;   continue; }
        else if(a[i]<0) {a[i]=9;  continue; }
    }
}

for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
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
