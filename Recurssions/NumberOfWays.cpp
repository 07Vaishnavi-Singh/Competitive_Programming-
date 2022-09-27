#include <iostream>

using namespace std;

 int ways(int n){
     if(n==0){
         return 1;
     }
     if (n<0){
         return 0;
     }
     int answer=ways(n-1)+ways(n-2);
     return answer;
     
 }

int main()
{
    int n;
    cout<<"Enter the vallue of n "<<endl;
    cin>>n;
    int src=0;
   
int value =ways( n );
cout<<value;
    return 0;
}
