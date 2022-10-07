//Binary Search: Searching in the sorted array by repeatedly dividing the search interval into half.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    //Entering of the values in the array
    int n,i,j,value;
    cout<<"Enter the no. of elements: ";
    cin>>n;
    int a[n];
    cout<<"Enter values: ";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    
    
    //Sorting the inserted elements, as for binary search either all the elements should be in assending order or in descending order.(Here asscending order is used)
    //Insertion sort or directly sort(a,a+n) could also be used
    for(i=1;i<=n-1;i++)
    {
        j=i;
        int t=a[i];
        while(j>0&&a[j-1]>=t)
        {
            a[j]=a[j-1];
            j--;
        }
        a[j]=t;
    }
    cout<<"The sorted elements: ";
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }

    //The no. to be searched
    cout<<endl<<"Enter the number to be searched: ";
    cin>>value;

    //Logic of Binary Search 
    int lb=0,ub=n-1,mid,pos=-1;
    while(pos==-1&&lb<=ub)
    {
        mid=(lb+ub)/2;
        if(a[mid]==value)
            pos=mid;
        else
            if(value>a[mid])
        {
            lb=mid+1;
        }
        else
        {
            ub=mid-1;
        }
    }
    if(pos!=-1)
    {
        cout<<"Search successful"<<endl;
        cout<<"Number found at index: "<<pos<<endl;
    }
    else
    {
        cout<<"Number not found"<<endl;
    }
    return 0;
}
