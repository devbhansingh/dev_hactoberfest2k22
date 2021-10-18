#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Enter n: ";
    cin>>n;

    int k = 2 * n - 2;

    for (int i = 0; i < n; i++) {      // loop for printing spaces
        for (int j = 0; j < k; j++)
            cout << " ";

        k = k - 1;

        for (int j = 0; j <= i; j++) {   // Printing stars
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}
