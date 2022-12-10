#include<iostream>
using namespace std;

int main()
{
	int n ; 
	cout<<"Enter the szie of an Array ..\n";
	cin>>n;
	
	int arr[n];
	cout<<"\n enter the elemnet of an array.. "<<endl;
	for(int i= 0; i<n ; i++){
		cin>>arr[i];
	}
	
	for (int i= 0 ; i<n ; i++)
	{
		cout<<"\n printing the unsorted array.."<<arr[i];
	}
	
	int counter = 1;
	
	while(counter<n)
	{	cout<<"\n current counter ... "<<counter<<endl;
	
		for(int i = 0; i<n-counter;i++)
	     {
		cout<<"\n condition value  ... "<<n-counter<<endl;
	
	     	if(arr[i]>arr[i+1])
	          { cout<<"\n arr[ "<<i<<"] = "<<arr[i];
                cout<<"\n arr[ "<<i+1<<"] = "<<arr[i+1];
	          	
				  int temp = arr[i];
	          	arr[i] = arr[i+1];
	          	  arr[i+1] = temp ; 
	          	
				  cout<<"\n after swapping  arr[ "<<i<<"] = "<<arr[i];
                cout<<"\n after swapping arr[ "<<i+1<<"] = "<<arr[i+1];
	          	  
	          }
	          
	          
		}
		cout<<counter<<endl;
	for(int i=0 ;i<n ;i++)
	{   
	  	cout<<"\n  array ...  "<<arr[i];
	}

		counter++;
		
	}
	
	for(int i=0 ;i<n ;i++)
	{
		cout<<"\n the sorted array by bubble sort...  "<<arr[i];
	}
}