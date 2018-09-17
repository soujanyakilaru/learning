#include<iostream>
using namespace std;
int main()
{
    int i, n= 10, result ;
    result=1;
    for(i=1; i<=n; i++)
    {
        result= result * i;
    }  
    cout<<"factorial of " << n << " is " <<result<< "\n ";  
        
    return 0;
}
