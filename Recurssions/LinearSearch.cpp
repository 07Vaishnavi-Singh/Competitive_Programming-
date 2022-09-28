#include <iostream>

using namespace std;



 bool searching(int arr[],int size,int k){
     //base case
    if(size==0){
        return false;
    }
    if(arr[0]==k){
        //there is a problem in the output statemnet basically how to print the index at which the element is present 
       cout<<"found at position ="<<(10-int(size/4))<<endl;
        return true;
    }
    else{
    bool remAnswer= searching(arr+1,size-1,k);
    return remAnswer;
    }
 }





int main()
{
   int key ;
    int arr[10];
    cout<<"Enter the elements of array "<<endl;
    for(int i=0;i<10;i++){
        cin>>arr[i];
    }
   
    int size =sizeof(arr);
    cout<<"enter the element to be searched"<<endl;
    cin >>key;
    bool ans=searching(arr,size,key ) ;
   if(!searching){
       cout<<"does not exists "<<endl; 
   }
    
   
    return 0;
}
