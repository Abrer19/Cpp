#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++) cin>>arr[i];
int low=0,high=n-1;
int ans=-1;
int target=4;
while(low<=high){
    int mid=(low+high)/2;
    if(arr[mid]==target){
        ans=mid;
        low=mid+1;

    }
    else if(arr[mid]>target){
        high=mid-1;
    }
    else{
        low=mid+1;
    }
}

cout<<ans<<endl;

}
