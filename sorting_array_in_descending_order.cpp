#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter no. of elements to enter:"<<endl;
    cin>>n;
	int A[n];
    cout << "Enter Array:"<<endl;
    for (int i = 0; i < n; i++)
	    cin>> A[i];
	sort(A, A + n, greater<int>());
	cout << "Sorted Array:"<<endl;
	for (int i = 0; i < n; i++)
		cout << A[i] << " ";
	return 0;
}
