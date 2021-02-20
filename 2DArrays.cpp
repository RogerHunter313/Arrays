#include <iostream>
using namespace std;

void printArray(int a[][100], int m, int n) {
    //row wise
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << a[i][j] << " ";  // a[i][j] = i * columns + j
        }                            // So, this function needs to know the initialized
                                    // size of the columns to know this memory location
        cout << endl;
    }
}

int main() {
    int my2DArray [5][100]; // storage size must be known

    int m, n;
    cin >> m >> n;

    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cin>>my2DArray[i][j];
        }
    }

    printArray(my2DArray, m, n);

    return 0;
}
