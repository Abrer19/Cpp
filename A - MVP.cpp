#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
int a[n];
int ans=-1e9;
for(int i=0;i<n;i++){
    cin>>a[i];
}
for(int i=0;i<n;i++){
  ans=max(ans,a[i]);
}


cout<<ans<<endl;
}
