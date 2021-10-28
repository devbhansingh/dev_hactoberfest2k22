// demonstrating bubble sort 

#include<iostream>
using namespace std;

void bubble_sort(int arr[], int n)
{   
   int i,j;
   int temp;
   
   //bubble sort 
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if(arr[j]>arr[j+1])
			 {
			 	temp=arr[j];
			 	arr[j]=arr[j+1];
			 	arr[j+1]=temp;
			 }
		}
	}
}
int main()
{
	int n,i,k;
	cout<<"enter size:";
    cin>>n;
	int arr[n];   
	
	cout<<"enter :";
	for(i=0;i<n;i++)
	{
	 cin>>arr[i];	
	}
	
	bubble_sort(arr,n);
  
    cout<<"\n the sorted array: \n";
    for(i=0;i<n;i++)
	{
	 cout<<arr[i]<<" ";
	}
    
    return 0;
}
