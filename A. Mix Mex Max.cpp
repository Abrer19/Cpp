#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
int t;
cin>>t;
while(t--){
int n;
cin>>n;
bool flag=true;
int val=-1;
int temp;
int arr[n];
for(int i=0;i<n;i++) {
    cin>>temp;
    if(temp!=-1){
        if(val==-1){
            val=temp;
        }
        else if(val!=temp){
            flag=false;
        }
    }

}

if(flag && val!=0){
    cout<<"YES"<<endl;
}
else cout<<"NO"<<endl;

}

}


