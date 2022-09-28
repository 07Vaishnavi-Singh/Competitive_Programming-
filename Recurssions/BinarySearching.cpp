#include <iostream>

using namespace std;



bool binarySearch(int arr[],int s,int e,int k){
    int mid= s+(e-s)/2;
 if(s>e){
     return false;
 }
 
 if(arr[mid]==k){
     return true;
 }
    
    if(k>arr[mid]){
       return  binarySearch(arr,mid+1,e,k);
    }
    if(k<arr[mid]){
     return  binarySearch(arr,s,mid-1,k);
    }
   
}

int main()
{
   int arr[]={1,2,3,4,5};
   int k;
   cout<<"Enter the element t o  be searched "<<endl;
   cin>>k;
   int s=0;
   int e=4;
  cout<<binarySearch(arr,s,e,k)<<endl;
   
    return 0;
}
