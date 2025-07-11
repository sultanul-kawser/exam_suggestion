#include <bits/stdc++.h>
using namespace std;
int main()
{
    // find the largest number of a given array
    cout << "enter the size of the array:\n";
    int n; cin >> n; 
    cout << "enter the elements:\n";
    int num[n];
    for(auto i = 0; i < n; i++){
        cin >> num[i];
    }
    int big = INT_MIN;
    for(auto i = 0; i < n; i++){
        if(num[i] > big){
            big = num[i];
        }
    }
    cout << "the maximum number is " << big ;
    
    return 0;
}