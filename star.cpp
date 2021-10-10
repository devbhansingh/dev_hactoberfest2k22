#include<bits/stdc++.h>
using namespace std;
int main() {
    cout << "Please enter number of rows for pyramid\n";
    int n;
    cin >> n;
    for(int i = 0; i<n; i++) {
        for(int j = 0; j<2*(n-i-1); j++) cout << " ";
        for(int j = 0; j<2*i + 1; j++) cout <<"* ";
        cout << "\n";
    }
}