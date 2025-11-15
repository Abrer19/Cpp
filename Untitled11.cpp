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
void merge(int arr[],int low,int mid,int high){
vector<int>temp;
int l=low,r=mid+1;
while(l<=mid && r<=high){
    if(sumofdigit(arr[l])<=sumofdigit(arr[r])){
        temp.push_back(arr[l]);
        l++;
    }
    else{
        temp.push_back(arr[r]);
        r++;
    }
}
while(l<=mid){
    temp.push_back(arr[l]);
        l++;
}
while(r<=high){
     temp.push_back(arr[r]);
        r++;
}


for(int i=low;i<=high;i++){
    arr[i]=temp[i-low];
}



}
void mergesort(int arr[],int low,int high){
if(low>=high) return;
int mid=(low+high)/2;
mergesort(arr,low,mid);
mergesort(arr,mid+1,high);
merge(arr,low,mid,high);
}
int main(){
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++) cin>>arr[i];
int low=0,high=n-1;
mergesort(arr,low,high);


for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
cout<<endl;
}
