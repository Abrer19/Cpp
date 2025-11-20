#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
ll n;
cin>>n;
ll count=0;
while(n>0){
    n=n/5;
    count+=n;
}
cout<<count<<endl;
}
