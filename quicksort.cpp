#include<iostream>
using namespace std;

int position(int arr[] , int s , int e){
	int povt = arr[s];
	int count = 0;
	
	for(int i =s+1 ; i<=e ; i++)
	 {
	 	if(arr[i]<=povt){
	 		count++;
		 }
	 }
  // place povt ko right position
     int povtIndex = s + count ;
     swap(arr[povtIndex],arr[s]);
   
   //left and right wale part ko sambhalna hai .
    
    int i = s;
    int j = e;
    
    while(i<povtIndex && j>povtIndex)
    {
    	while(arr[i]<povt)
    	{
    		i++;
		}
		while(arr[j] > povt )
		{
			j--;
		}
		if(i<povtIndex && j>povtIndex)
		 {
		 	swap(arr[i++],arr[j--]);
		 }
	}
	return povtIndex;
     
}



 void quickSort(int arr[], int s , int e)
 {
 	
	   
 }

int main()
{
    int n ;
    cin>>n;
    int arr[n];
    for(int i ; i<n ;i++){
        cin>>arr[i];
    }
  
   quickSort(arr , 0 , n-1 );
   
   for(int i=0; i<n ;i++)
   {
   	 cout<<arr[i]<<" ";
   	 
   }
}