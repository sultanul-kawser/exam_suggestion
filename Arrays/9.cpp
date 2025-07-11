#include <bits/stdc++.h>
using namespace std;

int main()
{
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
     
    
    return 0;
}