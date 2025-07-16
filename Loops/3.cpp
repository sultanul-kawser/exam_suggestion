#include <bits/stdc++.h>
using namespace std;
int main()
{
    //Find the factorial number of a given integer
    cout << "enter the integer:\n";
    int n; cin >> n; 
    vector<int> result(1,1);
    while(n > 0){
        int carry, len = result.size(); 
        for(auto i = 0; i < len; i++){
            int multi = result[i] * n + carry;
            result[i] = multi % 10;
            carry = multi / 10;
        }
        while(carry){
            result.push_back(carry % 10);
            carry /= 10;
        } n--;
    }
    reverse(result.begin(), result.end());
    for(auto val : result){
        cout << val;
    }
    return 0;
}