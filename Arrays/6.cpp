#include <bits/stdc++.h>
using namespace std;
int smallest_num(int n, int arr[]){
    int small = INT_MAX;
    for(auto i = 0; i < n; i++){
        if(arr[i] < small){
            small = arr[i];
        }
    }
    return small;
}
int main()
{
    
    //find the second smallest element in an array
    cout << "enter the size of the array:\n";
    int n; cin >> n; 
    cout << "enter the elements:\n";
    int arr[n];
    for(auto i = 0; i < n; i++){
        cin >> arr[i];
    }
    int small = INT_MAX;
    for(auto i = 0; i < n; i++){
        if(smallest_num(n, arr) != arr[i] && arr[i] < small){
            small = arr[i];
        }
    }
    cout << "the second largest number is " << small;
    
    return 0;
}