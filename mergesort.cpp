#include<iostream>
using namespace std;
 
void merge (int arr[] , int start ,int end){
	 
	 int mid = (start+end)/2;
	 
	 int len1 = mid - start + 1;
	 int len2 = end - mid ;
	 
	 //create sub arrays..
	 int *first = new int[len1];
	 int *second = new int[len2];
	 
	 //copy value..
	 int mainArrayIndex = start;
      
      
	  for(int i=0;i<len1 ; i++){
          first[i]=arr[mainArrayIndex++];	 
	  }
	  
	 mainArrayIndex = mid+1;
       
	  for(int i=0;i<len2 ; i++){
          second[i]=arr[mainArrayIndex++];	 
	  }
	  
	  //merge 2 sorted array..
	  
	  int index1 = 0;
	  int index2 = 0;
	  
	   mainArrayIndex = start;
      
      while(index1 < len1 && index2 < len2){
      	 
		   if (first[index1] < second[index2] )
      	    { 
      	       arr[mainArrayIndex++] = first[index1++]; 
			}
			else{
				 arr[ mainArrayIndex++ ] = second[index2++];
			}
	  }
	  
	  while (index1 < len1 )
	  {
	  	       arr[mainArrayIndex++] = first[index1++]; 
	
	  }
	  while (index2 < len2 )
	  {
	  	       arr[mainArrayIndex++] = second[index2++]; 
	
	  }
	  
	  delete []first;
	  delete []second; //delete the array for free memory..

}



 void mergeSort(int arr[] , int start, int end){
     //  BASE CASE..
	 if(start>=end){
	 	return ;
	 }
	 
	 int mid = (start+end)/2;	
	 
	 //left part sort karna hai 
	   mergeSort(arr , start , mid );
	  
	 //right part sort karna hai 
	   mergeSort(arr, mid+1 , end);
	   
	   //merge sorted array
	   merge(arr ,start , end);  
 }  

int main()
{
    int n ;
    cin>>n;
   int arr[n];
   
   for(int i=0;i<n;i++){
   	    cin>>arr[i];
   }
 
  mergeSort(arr,0,n-1); // mergeSort (arr, start , end )
  
  for(int i=0;i<n;i++)
    {
    	cout<<arr[i]<<" ";
	}
	
}