#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
int n,m;
cin>>n>>m;
vector<string>v(n);
for(int i=0;i<n;i++){
    cin>>v[i];
}

int a=0,b=0;
int mx=0;

for(int i=0;i<n;i++){
    int am=0;
    for(int j=0;j<m;j++){
        if(v[i][j]=='#'){
              am++;
        }
    }
    if(am>mx){
        mx=am;
        a=i+1;
    }
}

mx=0;
for(int j=0;j<m;j++){
    int bm=0;
    for(int i=0;i<n;i++){
       if(v[i][j]=='#'){
              bm++;
        }
    }
    if(bm>mx){
        mx=bm;
        b=j+1;
    }
}


cout<<a<<" "<<b<<endl;
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
}

}
