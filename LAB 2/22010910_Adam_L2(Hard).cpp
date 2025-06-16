/*
*****************************
id: 22010910
name: Adam Zharfan
contact: 0129520190
email: muhammad_22010910@utp.edu.my

question: Find a specific pair in Matrix
*/

#include <iostream>
#include <climits>
using namespace std;

const int SIZE = 5;

int maxDifference(int matrix[SIZE][SIZE]) {
    int maxDiff = INT_MIN;

    for (int x1 = 0; x1 < SIZE - 1; x1++) {
        for (int y1 = 0; y1 < SIZE - 1; y1++) {
            for (int x2 = x1 + 1; x2 < SIZE; x2++) {
                for (int y2 = y1 + 1; y2 < SIZE; y2++) {
                    int diff = matrix[x2][y2] - matrix[x1][y1];
                    if (diff > maxDiff) {
                        maxDiff = diff;
                    }
                }
            }
        }
    }

    return maxDiff;
}

int main() {
    int matrix[SIZE][SIZE] = {
        { 1,  2, -1, -4, -20},
        {-8, -3,  4,  2,   1},
        { 3,  8,  6,  1,   3},
        {-4, -1,  1,  7,  -6},
        { 0, -4, 10, -5,   1}
    };

    cout << "Max difference: " << maxDifference(matrix) << endl;

    return 0;
}
