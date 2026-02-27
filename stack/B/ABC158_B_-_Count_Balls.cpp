#include <iostream>
#include <string>
#include <stack>
#include <algorithm>
using namespace std;
int main() {
    int num, blue, red;
    int result = 0;
    cin >> num >> blue >> red;
    stack<char> st;
    
    //create stack
    for (int i = 0; i < (num/(blue+red)); i++) {
        for(int a = 0; a < blue; a++) {
            st.push('b');
        }
        for(int b = 0; b < red; b++) {
            st.push('r');
        }
    }
    //delete unneccesary part
    for (int k = 0; k < max(0, blue + red - num); k++) {
        if(!st.empty()){
            st.pop();
        }
    }
    //inspect stack
    while (!st.empty()) {
        char last = st.top();
            if(last == 'b') {
                result ++;
            }
            st.pop();
        }
    cout << result << endl;
}