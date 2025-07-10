//prime number up to given N integer number
#include <bits/stdc++.h>
using namespace std;
bool isPrime(int n){
    if(n <= 1){
        return true;
    }
    for(auto i = 2; i <= (n/2); i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}
int main()
{
   cout << "Enter the range of N:\n";
   int n; cin >> n; 
   for(auto i = 2; i <= n; i++){
    if(isPrime(i)){
        cout << i << " ";
    }
    
   }
    return 0;
}