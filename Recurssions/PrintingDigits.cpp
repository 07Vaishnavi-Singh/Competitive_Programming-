#include <iostream>

using namespace std;
 
 void printer(int n,int arr[]{
     //base case 
     if(n==0){
         return ;
     }
     //processing 
     int digit =n%10;
     n=n/10;
     cout <<arr[digit]<<endl;
     //recurssive call
     printer(n);
 }







int main()
{
    int n ;
    cout<<"Enter the value of n "<<endl;
    cin >>n ;
    string arr[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    printer(n,arr);

    return 0;
}
