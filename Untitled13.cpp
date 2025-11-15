#include<bits/stdc++.h>
using namespace std;
int binarySearch(int arr[],int target,int low,int high){
int mid=(low+high)/2;

if(arr[mid]==target) return mid+1;
else if(arr[mid]>target) high=mid-1;
else low=mid+1;


return low;

}
int main(){
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++) cin>>arr[i];

for(int i=0;i<n;i++){
    int temp=arr[i];
    int j=i-1;

    int pos=binarySearch(arr,temp,0,j);

    while(j>=pos){
        arr[j+1]=arr[j];
        j--;
    }
    arr[j+1]=temp;
}

for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
cout<<endl;

}
