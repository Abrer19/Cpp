#include<bits/stdc++.h>
using namespace std;
int main(){
int n,k;
cin>>n>>k;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
sort(arr,arr+n);
int cnt=0;
int i=0,j=n-1;
while(i<=j){
    if(arr[i]+arr[j]<=k){
        i++;
        j--;
    }
    else j--;
    cnt++;
}
cout<<cnt<<endl;

}
