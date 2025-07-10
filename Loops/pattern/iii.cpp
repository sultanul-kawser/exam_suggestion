#include <bits/stdc++.h>
using namespace std;
int main()
{
    
    cout << "enter the number of rows:\n";
    int n; cin >> n; 
    for(auto i = 1; i <= n; i++){
        for(auto j = n - i; j > 0; j--){
            cout << " ";
        }for(auto k = 1; k <= i; k++){
            cout << "*";
        }
        if(i != 1){
            for(auto l = 1; l <= i - 1; l++){
                cout << "*";
            }
        }cout << "\n";
    }
    
    return 0;
}