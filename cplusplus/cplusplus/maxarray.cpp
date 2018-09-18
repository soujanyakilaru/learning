#include<iostream>
using namespace std;
int main()
{
    int a[10], max, i ;
    a[0]=5; a[1]=1; a[2]=-10; a[3]=0; a[4]=45; a[5]=56; a[6]=78; a[7]=23; a[8]=34; a[9]=3;
    max = a[0] ;
    for(i=1 ; i<10 ; i++ )
    {
        if (max < a[i]) 
        {
           max = a[i];
         }
    } 
    cout<<"THE MAXIMUM VALUE AMONG THE NUMBERS IS "<< max <<"\n" ;
    
    return 0;
}
