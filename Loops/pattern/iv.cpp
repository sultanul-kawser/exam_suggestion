#include <bits/stdc++.h>
using namespace std;
int main()
{
    
    cout << "enter the number of rows:\n";
    int n; cin >> n; 
    char ch = 'A';
    for(auto i = 1; i <= n; i++){
        for(auto j = 1; j <= i; j++){
            cout << ch;
        }cout << "\n";
        ch += 1;
    }
    
    return 0;
}