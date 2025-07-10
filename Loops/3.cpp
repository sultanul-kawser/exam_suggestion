#include <bits/stdc++.h>
using namespace std;
int main()
{
    //Find the factorial number of a given integer
    cout << "Enter the integer:\n";
    int n; cin >> n;
    long long fact = 1;  
    for(auto i = 2; i <= n; i++){
        fact *= i;
    }
    cout << "factorial of " << n << " is " << fact;
    return 0;
}