#include<iostream>
using namespace std;



int *insertx(int pos , int arr[] , int x , int n )
{
     n++ ; // size of array increase...
 // shifting  the elemeent ...
     for(int i = n ; i>=pos ; i--)
     {
         arr [ i ] = arr[ i-1 ];
     }
     
     arr[pos-1] = x ;
  
  return arr;
 
}


int main()
{
    int arr[100]  {0};
    int pos , x , n =5 ; 
     // x = value to be inserted ... ,, pos = position at which value to be inserted....

    
    for(int i= 0; i<5 ; i++)
    {
         arr[i] = i +1 ;
    }

     for(int i= 0; i<n ; i++)
    {
        cout<<"\n arr..."<<arr[i]<<" ";
     }

    cout<<"\n value to be inserted.... ";
    cin>>x;

    cout<<"\n at pos ....";
    cin>>pos;
 
   insertx(pos, arr , x, n);

    for(int i = 0; i<n+1 ; i++)
    { 
        cout<<"\n New array.. "<<arr[i];
    }
  return 0;
}
