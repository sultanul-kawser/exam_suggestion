#include <bits/stdc++.h>
using namespace std;
int maximum_num(int n, int arr[]){
    int big = INT_MIN;
    for(auto i = 0; i < n; i++){
        if(arr[i] > big){
            big = arr[i];
        }
    }
    return big;
}
int main()
{
    
    //find the second largest element in an array
    cout << "enter the size of the array:\n";
    int n; cin >> n; 
    cout << "enter the elements:\n";
    int arr[n];
    for(auto i = 0; i < n; i++){
        cin >> arr[i];
    }
    int big = INT_MIN;
    for(auto i = 0; i < n; i++){
        if(maximum_num(n, arr) != arr[i] && arr[i] > big){
            big = arr[i];
        }
    }
    cout << "the second largest number is " << big;
    
    return 0;
}