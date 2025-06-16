/*
*****************************
id: 22010910
name: Adam Zharfan
contact: 0129520190
email: muhammad_22010910@utp.edu.my

question: Find median in row wise sorted matrix
*/

#include <iostream>
#include <algorithm>
using namespace std;

int matMedian(int matrix[3][3], int row, int column){
    int size = row * column;
    int arrayMat[size];
    int count = 0;

    for (int i = 0; i < row; i++){
        for (int j = 0; j < column; j++){
            arrayMat[count] = matrix[i][j];
            count++;
        }
    }

    sort(arrayMat, arrayMat + size);
    return arrayMat[size/2];
}

int main(){
    int matrix[3][3] = {
        {1, 3, 5},
        {2, 6, 9},
        {3, 6, 9}
    };

    cout << "Median: " << matMedian(matrix,3,3);
}
