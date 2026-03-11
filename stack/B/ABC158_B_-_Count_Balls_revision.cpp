#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    long long N, A, B;
    cin >> N >> A >> B;

    long long L = A + B;
    long long q = N / L;
    long long r = N % L;

    long long ans = q * A + min(A, r);
    cout << ans << "\n";
    return 0;
}