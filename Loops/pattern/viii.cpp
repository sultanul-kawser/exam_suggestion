#include<bits/stdc++.h>
using namespace std;
int main(){

    cout << "enter the number of rows:\n";
    int n; cin >> n; 
    for(auto i = 0; i < n; i++){
        int num = 1; 
        for(auto j = 0; j < n - i - 1; j++){
            cout << " ";
        }
        for(auto k = 0; k <= i; k++){
            cout << num << " ";
            num = num * (i - k) / (k + 1);
            
        }cout << "\n";
    }
    return 0; 
}