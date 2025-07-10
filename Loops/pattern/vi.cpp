#include <bits/stdc++.h>
using namespace std;
int main()
{
    
    cout << "enter the number rows:\n";
    int n; cin >> n; 
    for(auto i = 1; i <= n; i++){
        for(auto j = 1; j <= n - i + 1; j++){
            cout << j;
        }cout << "\n";
    }
    
    return 0;
}