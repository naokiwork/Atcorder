#include<iostream>
#include<string>
using namespace std;
  
  char s[9];
  
  void a (int n, int p) {
    if (n==0) cout << s << "\n";

    else {
      s[p] = 'a';
      a(n-1, p+1);
      s[p] = 'b';
      a(n-1, p+1);
      s[p] = 'c';
      a(n-1, p+1);

    }
  }

  int main() {
    int i;
    cin >> i;
    s[i] = 0;
    
    a(i, 0);
  }
  