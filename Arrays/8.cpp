#include <bits/stdc++.h>
using namespace std;
int main()
{
    
    // binary search
    cout << "enter the size of array:\n";
    int n; cin >> n; 
    cout << "enter the elements:\n";
    int arr[n];
    for(auto i = 0; i < n; i++){
        cin >> arr[i];
    }
    cout << "enter the target:\n";
    int target; cin >> target;
    int low = 0, high = n - 1, mid;
    bool found = true;
    while(low <= high){
        mid = (low + high) / 2;
        if(arr[mid] > target){
            high = mid - 1;
        }else if(arr[mid] < target){
            low = mid + 1;
        }else if(arr[mid] == target){
            cout << "target found.";
            found = false;
            break;
        }
    }
    if(found){
        cout << "target not found.";
    }
    
    return 0;
}