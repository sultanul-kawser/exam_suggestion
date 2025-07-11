#include <bits/stdc++.h>
using namespace std;
int main()
{
    // find the smallest number of a given array
    cout << "enter the size of the array:\n";
    int n; cin >> n; 
    cout << "enter the elements:\n";
    int num[n];
    for(auto i = 0; i < n; i++){
        cin >> num[i];
    }
    int small = INT_MAX;
    for(auto i = 0; i < n; i++){
        if(num[i] < small){
            small= num[i];
        }
    }
    cout << "the smallest number is " << small ;
    
    return 0;
}