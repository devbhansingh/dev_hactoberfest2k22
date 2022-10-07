//Bubble Sort is a sorting algorithm,that is a comparison-based algorithm in which each pair of adjacent elements is compared and the elements are swapped if they are not in order.

/*
    Time Complexity(Best Case): O(n)
    Time Complexity(Average Case): O(n^2)
    Time Complexity(Worst Case): O(n^2)
    Auxiliary Space: O(1)
*/

#include <iostream>

using namespace std;

int main()
{
    int n,i,j;

//Input for the Array
    cout<<"Enter the no. of elements: ";
    cin>>n;
    int a[n];
    cout<<endl<<"Enter Numbers: ";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }

//Logic for sorting
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++) //After every complete execution of the loop(one pass) the largest element will come to the end and every time the iteration will decrease by one.
        {
            if(a[j]>a[j+1])  //Swapping of the adjacent elements for proper arrangement.
            {
                int t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }

//Displaying the Sorted Elements
    cout<<endl<<"The sorted elements are: ";
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
}
