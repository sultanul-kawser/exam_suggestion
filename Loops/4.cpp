#include <bits/stdc++.h>
using namespace std;
int main()
{
    
    cout << "enter two numbers: \n";
    long long a, b; cin >> a >> b;
    long long temp1 = a, temp2 = b;
    while(a % b != 0){
        long rem = a % b;
        b = rem;
        a = b;
    }
    cout << "GCD of " << a << " and " << b << " is " << b << "\n";
    cout << "LCM of " << a << " and " << b << " is " << (temp1 * temp2) / b;
    
    return 0;
}