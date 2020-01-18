#include <iostream>
using namespace std;

int main() {

    int i, n;
    string opr;
    
    cout << "SELAMAT DATANG\n Di program ini anda bisa melakukan operasi penjumlahan, pengurangan, perkalian, serta penurunan dari polinom\n";
    cout << "Masukkan derajat tertinggi dari polinomial: ";
    cin >> n;

    int polA[n+1];

    for (i = 0; i <= n; i++) {
        cin >> polA[n-i];
    }
    
    cout << "Silakan pilih operasi yang akan anda lakukan (tambah/kurang/kali/turunan)\n";
    cout << "Operasi yang dipilih: ";
    cin >> opr;

    for (i = 0; i <= n; i++) {
        cout << polA[n-i] << "X^" << n-i << " ";
    }
    cout << "\n";
    for (i = 0; i <= n; i++) {
        cout << polA[n-i]*(n-i) << "X^" << (n-i-1) << " ";
    }

    return 0;
}
