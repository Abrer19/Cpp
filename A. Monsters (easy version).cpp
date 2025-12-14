#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    long long  ans=0;
    vector<int>b(n);
    b[0]=1;
    for(int i=1;i<n;i++){
        b[i]=min(b[i-1]+1,a[i]);
    }
    for(int i=0;i<n;i++){
        ans+=(a[i]-b[i]);
    }
 cout<<ans<<endl;
}
}
