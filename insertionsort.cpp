#include<iostream>
using namespace std;

int main()
{
	int n = 5 ;
	int arr[5]= { 4,5,1,2,3};
	/*for(int i=0; i<n ; i++){
		cin>>arr[i];
	}
	*/
	for(int i=1; i<n;i++)
	{
	   int current =arr[i];
	   int j= i-1;
	   	cout<<"\n j will be .."<<j<<endl;
	   
	   while(arr[j]>current && j>=0){
	   	arr[j+1]=arr[j];
	   	cout<<"\n value of before j will be .."<<j<<endl;
	   	
	   	j--;
	   	cout<<"\n value of after j will be .."<<j<<endl;
	   }
	   arr[j+1]=current;
	   	cout<<"\n vallue of arr [ "<<j+1<<"] = "<<arr[j+1];
	   
	   
	}
	
	for(int i =0;i<n;i++)
	{
		cout<<arr[i]<<" "<<endl;
	}
	cout<<endl;
	
	return 0;
}