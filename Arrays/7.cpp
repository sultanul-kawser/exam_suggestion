#include <bits/stdc++.h>
using namespace std;
int main()
{
    
    // linear search 
    cout << "enter the size of array:\n";
    int n; cin >> n; 
    cout << "enter the elements:\n";
    int arr[n];
    for(auto i = 0; i < n; i++){
        cin >> arr[i];
    }
    cout << "enter the target:\n";
    int target ; cin >> target;
    bool found = true;
    for(auto i = 0; i < n; i++){
        if(target == arr[i]){
            cout << "target found!";
            found = false;
            break;
        }
    }
    if(found){
        cout << "target not found.";
    }
    
    return 0;
}