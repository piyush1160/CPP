#include<iostream>
using namespace std;

int main()
{      int n;
      cout<<"Enter the no of element ... \n";
      cin>>n;
	 int arr[n];
	 cout<<"Enter the element int arr..  \n";
	 for (int i =0 ; i<n; i++)
	 {
	 	cin>>arr[i];
	 }
	 
	for (int i =0 ; i<n; i++)
	 {
	 	cout<<"\n elements in the arr["<<i<<"] = "<<arr[i];
	 	
	 }
	 
	  for(int i=0;i<n-1;i++){
	 	for(int j = i+1 ; j<n; j++){
	 		  if(arr[j]<arr[i]){
	 		  	 int temp = arr[j];
	 		  	 arr[j]=arr[i];
	 		  	 arr[i]=temp;
	 		  	 
			   }
		 }
	 }
	 
  for (int i =0 ; i<n; i++)
	 {
	 	cout<<"\n  sorted  arr[] "<<arr[i];
	 	
	 }
	 
}