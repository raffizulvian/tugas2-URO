#include <iostream>
using namespace std;

int main() {

    int i, n;

    cout << "Masukkan derajat tertinggi dari polinomial: ";
    cin >> n;

    int polA[n+1];

    for (i = 0; i <= n; i++) {
        cin >> polA[n-i];
    }

    for (i = 0; i <= n; i++) {
        cout << polA[n-i] << "X^" << n-i << " ";
    }
    cout << "\n";
    for (i = 0; i <= n; i++) {
        cout << polA[n-i]*(n-i) << "X^" << (n-i-1) << " ";
    }

    return 0;
}
