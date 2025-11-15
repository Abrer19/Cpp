#include<bits/stdc++.h>
using namespace std;
int partition(int arr[],int low,int high){
int pivot=arr[0];
int i=low+1,j=high;

while(i<=j){
    while(i<=high && arr[i]<=pivot) i++;
    while(j>=low && arr[j]>pivot) j--;
    if(i<j) swap(arr[i],arr[j]);
}

if(i>j) swap(arr[low],arr[j]);

return j;
}
void quicksort(int arr[],int low,int high){
if(low>=high) return;
int p=partition(arr,low,high);
quicksort(arr,low,p);
quicksort(arr,p+1,high);

}
int main(){
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++) cin>>arr[i];
quicksort(arr,0,n-1);


for(int i=0;i<n;i++) {
    cout<<arr[i]<<" ";
}
cout<<endl;



}
