#include <bits/stdc++.h>
using namespace std;
int main()
{
    cout << "Enter the integer:\n";
    int n; cin >> n; 
    bool isPrime = true;
    for(auto i = 2; i <= (n/2); i++){
        if(n % i == 0){
            cout << "Number is not a prime.";
            isPrime = false;
            break;
        }
    }
    if(isPrime){
        cout << "Number is a Prime.";
    }
    
    
    return 0;
}