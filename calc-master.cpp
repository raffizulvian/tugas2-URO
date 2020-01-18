#include <iostream>
using namespace std;

int main() {

    int i, n;
    string opr;

    cout << "SELAMAT DATANG\nDi program ini anda bisa melakukan operasi penjumlahan, pengurangan, perkalian, serta penurunan dari polinom\n";
    cout << "Masukkan derajat tertinggi dari polinomial: ";
    cin >> n;

    int polA[n+1];

    for (i = 0; i <= n; i++) {
        cin >> polA[n-i];
    }

    cout << "Polinom anda adalah: \n";
    for (i = 0; i <= n; i++) {
        cout << polA[n-i] << "X^" << n-i << " ";
    }

    cout << "\nSilakan pilih operasi yang akan anda lakukan (tambah/kurang/kali/turunan)\n";
    cout << "Operasi yang dipilih: ";
    cin >> opr;
    
    if (opr == "tambah") {
        //Masukin sini far
    }
    
    else if (opr == "kurang") {
        //Masukin sini dro
    }
    
    else if (opr == "kali") {
        //Masukin sini jul
    }
    
    else if (opr == "turunan") {
        //
    }
    
    for (i = 0; i <= n; i++) {
        cout << polA[n-i]*(n-i) << "X^" << (n-i-1) << " ";
    }

    return 0;
}

