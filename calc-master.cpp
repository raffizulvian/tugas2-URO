#include <iostream>
using namespace std;

// fungsi input array
void input(int arr[], int degree){
    int i;
    for(i = 0; i<=degree; i++){
        cout << "Masukkan koefisien suku x^" << degree-i << ": ";
        cin >> arr[degree-i];
    }
    return;
}

int main() {

    int i, n, opr, m;

    cout << "SELAMAT DATANG\nDi program ini anda bisa melakukan operasi penjumlahan, pengurangan, perkalian, serta penurunan dari polinom\n";
    cout << "Masukkan derajat tertinggi dari polinomial: ";
    cin >> n;

    int polA[n];
    input(polA,n);

    cout << "\n\nSilakan pilih operasi yang akan anda lakukan\n";
    cout << "1. Tambah    2. Kurang    3. Kali    4. Turunan\n";
    cout << "Nomor operasi yang dipilih: ";
    cin >> opr;

    if (opr == 1) {
        //Masukin sini far
        cout << "Masukkan derajat polinom B : ";
        cin >> m;
        int poliB[m];
        input(poliB,m);

        // ambil derajat tertinggi untuk derajat tertinggi pada array baru yang menyimpan hasil
        int max;
        if(n < m){
            max = m;
        } else{
            max =n;
        }

        // Penjumlahan array
        cout << "Hasil penjumlahan kedua polinom tersebut adalah : ";
        for(i=0;i<=max; i++){
            if(i == 0){
                cout << polA[max-i] + poliB[max-i] << "x^" << max-i;
            } else if( i == max && (polA[max-i] + poliB[max-i]) > 0){
                cout << " + " << polA[max-i] + poliB[max-i];
            } else if( i == max && (polA[max-i] + poliB[max-i]) < 0){
                cout << " " << polA[max-i] + poliB[max-i];
            } else if( (polA[max-i] + poliB[max-i]) > 0){
                cout << " + " << polA[max-i] + poliB[max-i] << "x^" << max-i;
            } else if((polA[max-i] + poliB[max-i]) < 0){
                cout << " " << polA[max-i] + poliB[max-i] << "x^" << max-i;
             }
        }

    }

    else if (opr == 2) {
        int i, m;
        cout << "Masukkan derajat tertinggi dari polinomial ke-2: ";
        cin >> m;

        int polB[m];
        input(polB,m);

        cout << "Hasil pengurangan polinom pertama dan kedua adalah: \n";
        for (i = 0; i <= m; i++) {
            cout << polA[m-i] - polB[m-i] << "X^" << m-i << " ";
        }
        return 0;


    }

    else if (opr == 3) {
        cout << "Fitur belum tersedia.";
    }

    else if (opr == 4) {
        cout << "\nHasil turunan polinomnya adalah: \n";
        for (i = 0; i <= n; i++) {
            if (i == 0) {
                if ((n-i-1) == 0) {
                    cout << polA[n-i]*(n-i);
                }
                else if (((n-i) != 0 && (n-i-1) != -1)) {
                    cout << polA[n-i]*(n-i) << "X^" << (n-i-1);
                }
                else if (((n-i) == 0)) {
                    cout << polA[n-i]*(n-i) << " ";
                }
                else if ((n-i-1) == -1) {
                    cout << " ";
                }
            }
            else if (i != 0) {
                if ((n-i-1) == 0 && (polA[n-i]*(n-i)) > 0) {
                    cout << " + " << polA[n-i]*(n-i);
                }
                else if (((n-i-1) == 0) && (polA[n-i]*(n-i)) < 0) {
                    cout << " " << polA[n-i]*(n-i);
                }
                else if (((n-i) != 0 && (n-i-1) != -1) && (polA[n-i]*(n-i)) > 0) {
                    cout << " + " << polA[n-i]*(n-i) << "X^" << (n-i-1);
                }
                else if (((n-i) != 0 && (n-i-1) != -1) && (polA[n-i]*(n-i)) < 0) {
                    cout << " " << polA[n-i]*(n-i) << "X^" << (n-i-1);
                }
                else if (((n-i) == 0) && (polA[n-i]*(n-i)) > 0) {
                    cout << " + " << polA[n-i]*(n-i) << " ";
                }
                else if (((n-i) == 0) && (polA[n-i]*(n-i)) < 0) {
                    cout << " " << polA[n-i]*(n-i) << " ";
                }
                else if ((n-i-1) == -1) {
                    cout << " ";
                }
            }
        }
    }


    return 0;
}
