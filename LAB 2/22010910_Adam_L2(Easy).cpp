/*
*****************************
id: 22010910
name: Adam Zharfan
contact: 0129520190
email: muhammad_22010910@utp.edu.my

question: Program to multiply two matrices
*/

#include <iostream>
using namespace std;

class Matrix{
    public:
    void multiply(int m1[2][2], int m2[2][2]){
        int r1 = 2, c1 = 2, r2 = 2, c2 = 2;
        int sum[r1][c2];

        if (c1 != r2){
            cout << "Invalid Multiplication";
            return;
        }

        for (int i = 0; i < 2; i++){
            for (int j = 0; j < 2; j++){
                for (int k = 0; k < 2; k++){
                    sum[i][j] += m1[i][k] * m2[k][j];
                }
            }
        }

        cout << "Result of Multiplying Matrices: " << endl;
        for (int i = 0; i < 2; i++){
            for (int j = 0; j < 2; j++){
                cout << sum[i][j] << "  ";
            }
            cout << endl;
        }
    }
};

int main(){
    int m1[2][2] = {{1,1},{2,2}};
    int m2[2][2] = {{1,1},{2,2}};

    Matrix matrix1;
    matrix1.multiply(m1,m2);
}
