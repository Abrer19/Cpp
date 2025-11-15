#include<bits/stdc++.h>
using namespace std;
int sumofdigit(int n){
int sum=0;
while(n>0){
    sum+=n%10;
    n=n/10;
}
return sum;
}
int partition(int arr[],int low,int high){
int pivot=arr[low];
int i=low+1,j=high;
while(i<=j){
if(i<=high && sumofdigit(pivot)>=sumofdigit(arr[i])) i++;
if(j>=low && sumofdigit(pivot)<sumofdigit(arr[j])) j--;
if(i<j) swap(arr[i],arr[j]);
}
swap(arr[low],arr[j]);
return j;

}
void quicksort(int arr[],int low,int high){
if(low>=high) return;
int p=partition(arr,low,high);
quicksort(arr,low,p-1);
quicksort(arr,p+1,high);
}
int main(){
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++) cin>>arr[i];
int low=0,high=n-1;
quicksort(arr,low,high);


for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
cout<<endl;
}
