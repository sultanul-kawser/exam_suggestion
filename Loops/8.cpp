#include<bits/stdc++.h>
using namespace std;
void check_palindrome(string line){
    int len = line.size();
     for(auto i = 0; i < len / 2; i++){
        if(line[i] != line[len - 1 - i]){
            cout << "string is not a palindrome."; return;
        }
    }
    cout << "stirng is a palindrome.";return;
}
int main(){
    cout << "enter your string: \n";
    string line; cin >> line;
    check_palindrome(line);

    return 0;
}