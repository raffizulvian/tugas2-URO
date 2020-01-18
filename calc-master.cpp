#include <iostream>
using namespace std;

int main() {

    int i, n, opr;

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

    cout << "\n\nSilakan pilih operasi yang akan anda lakukan\n";
    cout << "1. Tambah    2. Kurang    3. Kali    4. Turunan\n";
    cout << "Nomor operasi yang dipilih: ";
    cin >> opr;

    if (opr == 1) {
        //Masukin sini far
    }
  
    else if (opr == 2) {
        int i, m;
        cout << "Masukkan derajat tertinggi dari polinomial ke-2: ";
        cin >> m;

        int polB[m+1];

        for (i = 0; i <= m; i++) {
        cin >> polB[m-i];
        }

        cout << "Polinom ke- 2 anda adalah: \n";
        for (i = 0; i <= m; i++) {
            cout << polB[m-i] << "X^" << m-i << " ";
        }

        cout << "Hasil pengurangan polinom pertama dan kedua adalah: \n";
        for (i = 0; i <= m; i++) {
            cout << polA[m-i] - polB[m-i] << "X^" << m-i << " ";
        }
        return 0;
   

    }

    else if (opr == 3) {
        //Masukin sini jul
    }

    else if (opr == 4) {
        cout << "\nPolinom hasilnya adalah: \n";
        for (i = 0; i <= n; i++) {
            if ((n-i) != 0 && (n-i-1) != -1) {
                cout << polA[n-i]*(n-i) << "X^" << (n-i-1) << " ";
            }
            else if ((n-i) == 0) {
                cout << polA[n-i] * (n-i) << " ";
            }
            else if ((n-i-1) == -1) {
                cout << "";
            }
        }
    }


    return 0;
}
