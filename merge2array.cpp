//compare two vectors are equal or not 
#include<bits/stdc++.h>

using namespace std ; 
int main(){

 int arr1[] ={1,2,3};
   int arr2[] ={4,5,6};
   int arr3[10];
   int n1 = 3 , n2 = 3 ;
   
 int i = 0, j = 0, k = 0;
      // traverse the arr1 and insert its element in arr3
      while(i < n1){
      arr3[k++] = arr1[i++];
    }
       
      // now traverse arr2 and insert in arr3
      while(j < n2){
      arr3[k++] = arr2[j++];
    }
       
      // sort the whole array arr3
      sort(arr3, arr3+n1+n2);

 
   
   for ( int i =0 ;i < 6 ;i++)
       cout << arr3[i];
    
    return 0 ; 
}