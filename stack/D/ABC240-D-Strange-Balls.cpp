#include<iostream>
#include<stack>
std::stack<int> st;
using namespace std;

int main (){
    int N;
    cin >> N;
    int a[N];
    int count = 0;

    for(int i = 0; i < N; i++){
        cin >> a[i];
    }

    for(int j = 0; j < N; j++){
        //確認
        //先頭
        int k;
        for(k = 0; k < a[j]; k++){
            if(st.top() =! a[j]) break;
        }
        //a[j]個前まで同じ数字であった場合、breakは起こらず、kはa[j]-1と同値になる。
        if(k == a[j] - 1){
            count -= a[j];
        }

        //新しい要素を追加
        st.push(a[j]); 
        //カウント(表示)
        count++;
        cout << count << endl;
    }
    
}