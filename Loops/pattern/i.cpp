#include <bits/stdc++.h>
using namespace std;
int main()
{
    
    cout << "enter the number of rows: \n";
    int n; cin >> n; 
    for(auto i = 0; i < n; i++){
        for(auto j = 0; j <= i; j++){
            cout << "*";
        }cout << "\n";
    }
    
    return 0;
}