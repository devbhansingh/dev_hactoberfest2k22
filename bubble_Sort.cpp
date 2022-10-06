#include <bits/stdc++.h>
using namespace std;
#define FIO                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

// BASIC CODE
void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
        }
    }
}

// OPTIMISATION - I

void bubleSort2(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        // j goes till (n-i-1) because, after 1 pass 1 element is fixed at the last...
        // Similarly, after 2 passes, 2 elements are fixed at the end.
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
        }
    }
}

// OPTIMISATION - II
// Useful when arrray is already sorted or becomes sorted in the middle

void bubbleSort3(int arr[], int n)
{
    bool swapped;
    for (int i = 0; i < n - 1; i++)
    {
        swapped = false;
        for (int j = 0; j < n - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }

        // if no 2 elements were swapped by inner loop, then break
        if (swapped == false)
            break;
    }
}

int main()
{
    FIO

        return 0;
}
