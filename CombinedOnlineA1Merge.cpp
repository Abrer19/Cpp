#include<bits/stdc++.h>
using namespace std;
void merge(int arr[],int low,int mid,int high){

int l=low,r=mid+1;
vector<int>temp;

while(l<=mid && r<=high){
    if(arr[l]>=arr[r]){
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


for(int i=0;i<temp.size();i++) {
    arr[low+i]=temp[i];
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


for(int i=0;i<n;i++) {
        cout<<arr[i]<<" ";
    }
    cout << endl;
}
