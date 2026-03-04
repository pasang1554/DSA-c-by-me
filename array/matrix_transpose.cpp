#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter size of matrix (n x n): ";
    cin >> n;

    int matrix[n][n];

    cout << "Enter matrix elements:\n";
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

    // Step 1: Transpose
    for(int i = 0; i < n; i++) {
        for(int j = i; j < n; j++) {
            swap(matrix[i][j], matrix[j][i]);
        }
    }

    // Step 2: Reverse each row
    for(int i = 0; i < n; i++) {
        reverse(matrix[i], matrix[i] + n);
    }

    cout << "Rotated Matrix (90 degree clockwise):\n";
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

// 🧠 Why This Works?

// Original:

// 1 2 3
// 4 5 6
// 7 8 9

// After Transpose:

// 1 4 7
// 2 5 8
// 3 6 9

// After Reverse Rows:

// 7 4 1
// 8 5 2
// 9 6 3