#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;  // Number of test cases
    
    for(int i = 0; i < n; i++) {
        int a[6];
        
        // Read 6 integers into the array
        for(int j = 0; j < 6; j++) {
            cin >> a[j];
        }
        
        int x = 0, y = 0;
        
        // Calculate the sum of first 3 elements in x and the sum of last 3 elements in y
        for(int j = 0; j < 6; j++) {
            if(j < 3) x += a[j];  // First 3 elements
            if(j >= 3) y += a[j];  // Last 3 elements
        }
        
        // Debugging: Print the sums to check if they're being calculated correctly
        cout << "Sum of first 3: " << x << ", Sum of last 3: " << y << endl;
        
        // Check if x is equal to y and output the result
        (x == y) ? cout << "YES" : cout << "NO";
        cout << endl;
    }
    
    return 0;
}
