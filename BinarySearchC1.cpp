#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
int arr[n];
int sum=0;
for(int i=0;i<n;i++) cin>>arr[i];
int low=0,high=n-1;

while(low<=high){
   int mid=(low+high)/2;
   if(arr[mid]==1){
      sum+=arr[mid];
      low=low+1;
   }
   else{
       low=low+1;
   }

}

cout<<sum<<endl;

}
