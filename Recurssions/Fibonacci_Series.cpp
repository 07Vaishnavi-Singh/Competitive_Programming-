#include <iostream>

using namespace std;

 int fibonacci(int n){
     if(n==1){
         return 1;
     }
     if(n==0){
         return 0;
     }
     int answer =fibonacci(n-1)+fibonacci(n-2);
     
     return answer ;
 }

int main()
{
    int n;
    cout<<"Enter the number of the series to be printed "<<endl;
    cin>>n;
    
   
int value =fibonacci(n);
cout<<value <<endl;

    return 0;
}
