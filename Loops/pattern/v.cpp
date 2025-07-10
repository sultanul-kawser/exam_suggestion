#include <bits/stdc++.h>
using namespace std;
int main()
{
    
    cout << "enter the number of rows:\n";
    int n; cin >> n; 
    for(auto i = 1; i <= n; i++){
        for(auto j = n - i + 1; j > 0; j--){
            cout << "*";
        }cout << "\n";
    }
    
    return 0;
}