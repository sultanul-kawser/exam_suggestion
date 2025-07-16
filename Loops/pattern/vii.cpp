#include<bits/stdc++.h>
using namespace std;
int main(){
    cout << "enter the number of rows:\n";
    int n; cin >> n; 
    for(auto i = 1; i <= n; i++){
        for(auto space = 1; space <= n - i; space++){
            cout << " ";
        }for(auto j = i; j <= (2 * i - 1); j++){
            cout << j;
        }
        for(auto k = (2 * i - 2); k >= i; k--){
            cout << k;
        }
        cout << "\n";
    }
}