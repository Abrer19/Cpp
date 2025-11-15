#include<bits/stdc++.h>
using namespace std;
void merge(int low,int high,int mid,int arr[]){
    int l=low,r=mid+1;
    vector<int>temp;
    while(l<=mid && r<=high){
        if(arr[l]<=arr[r]){
            temp.push_back(arr[l]);
            l++;
        }
        else {
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


    for(int i=low;i<=high;i++) arr[i]=temp[i-low];
}
void merge_sort(int low,int high,int arr[]){
    if(low>=high) return;
    int mid=(low+high)/2;
    merge_sort(low,mid,arr);
    merge_sort(mid+1,high,arr);
    merge(low,high,mid,arr);
}
int main(){

int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++) cin>>arr[i];
int low=0,high=n-1;
merge_sort(low,high,arr);


for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
cout<<endl;
}
