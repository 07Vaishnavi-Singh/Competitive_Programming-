#include <iostream>

using namespace std;

 bool check(int arr[],int size){
     //base case
     if(size==0||size==1){
         return true;
     }
   //if first term is greater than second than retrun false immediately 
     if(arr[0]>arr[1]){
     return false ;
         
     }
     else{
     bool remAnswer = check(arr+1,size-1);
     return remAnswer;
     }
 }






int main()
{
   
    int arr[10];
    cout<<"Enter the elements of array "<<endl;
    for(int i=0;i<10;i++){
        cin>>arr[i];
    }
    int size =sizeof(arr);
    bool ans=check(arr,size) ;
    if(ans){
        cout <<"sorted"<<endl;
    }
    else{
        cout <<"unsorted"<<endl;
    }
    return 0;
}
