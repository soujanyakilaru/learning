#include<iostream>
using namespace std;
int main()
{
    int a[10], index, i,min ;
    a[0]=5; a[1]=1; a[2]=-10; a[3]=0; a[4]=45; a[5]=56; a[6]=78; a[7]=23; a[8]=34; a[9]=3;
    min = a[0] ;
    index = 0;
    i = 0;
    while ( i < 10 )
    {
        if (min > a[i]) 
        {
            min = a[i];
            index = i;
        }
        i = i +1;
        
    } 
    cout<<"min value occurs at the place "<< index <<"\n" ;
    
    return 0;
}
