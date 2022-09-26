#include <iostream>

using namespace std;
// recurssive function 
//recurssive function 
void steps(int src ,int des){
    cout<<"Source ="<< src<<"destination="<<des<<endl;
    //base-case 
    if(src==des){
       cout<<"reached"<<endl;
        return ;
    }
    //processing 
    src++;
    //recurssive relation 
    steps(src,des);
    
}



int main()
{    
   int src=1,des=10;
   steps(src,des);
    cout<<src<<endl;
    return 0;
}
