#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cin >> s;
    string word = "";
    for (int i = 0; i < s.size(); i++){
        if (s[i] == '0') {
            word += '0';
        }
        else if (s[i] == '1') {
            word += '1';
        }
        else if (s[i] == 'B') {
            if (!word.empty()) {
                word.pop_back();
            }
        }
    }
    cout << word << endl;
}