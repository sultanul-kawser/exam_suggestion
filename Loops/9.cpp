#include <bits/stdc++.h>
using namespace std;
int main()
{
    
    cout << "enter the integer: \n";
    long long n; cin >> n;
    long long originalNum = n;  
    long long reverseNum = 0; 
    while(n > 0){
        int rem = n % 10;
        reverseNum = (reverseNum * 10) + rem;
        n /= 10;
    }
    
    if(originalNum == reverseNum){
        cout << "The integer is a palindrome.";
    }else{
        cout << "The integer is not a palindrome.";
    } 
    
    return 0;
}