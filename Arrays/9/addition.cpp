#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout << "You have to enter the row and column of two matrixes same to do addition.\n";
    cout << "enter the size of row of matrix 1:\n";
    int row1; cin >> row1; 
    cout << "enter the size of column of matrix 1:\n";
    int col1; cin >> col1;
    cout << "enter the elements of matrix 1:\n";
    int mat1[row1][col1];
    for(auto i = 0; i < row1; i++){
        for(auto j = 0; j < col1; j++){
            cin >> mat1[i][j];
        }
    }
    cout << "enter the size of row of matrix 2:\n";
    int row2; cin >> row2;
    cout << "enter the size of column of matrix 2:\n";
    int col2; cin >> col2;
    cout << "enter the elements of matrix 2:\n";
    int mat2[row2][col2];
    for(auto i = 0; i < row2; i++){
        for(auto j = 0; j < col2; j++){
            cin >> mat2[i][j];
        }
    }
    cout << "Addition of both matrix is :\n"; 
    for(auto i = 0; i < row1; i++){
        for(auto j = 0; j < col1; j++){
            cout << mat1[i][j] + mat2[i][j] << " ";
        }cout << "\n";
    }
    return 0;
}