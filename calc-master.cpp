#include <iostream>
using namespace std;

// fungsi input array
void input(int arr[], int degree){
    int i;
    for(i = 0; i<=degree; i++){
        cout << "Masukkan derajat polinom x^" << degree-i << " : ";
        cin >> arr[degree-i];
    }
    return;
}

// Fungsi Penjumlahan 2 polinom
void add(int arrA[], int arrB[], int HighestDegree, int arrbaru[]){
    int i;
    for(i=0; i <= HighestDegree; i++){
        if (arrA[i] == NULL){
            arrA[i] = 0;
        } else if(arrB[i] == NULL){
            arrB[i] = 0;
        }
        arrbaru[i] = arrA[i] + arrB[i];
    }
    return;
}

// fungsi print polinomnya
void printAddition(int arrbaru[], int DerajatMax){
    int i;
    cout << "Hasil penjumlahan kedua polinom tersebut adalah : ";
     for(i =0; i<=DerajatMax; i++){
        if(i == 0){
            cout << arrbaru[i];
        }
        else if(arrbaru[i] > 0){
            cout << " + " << arrbaru[i] << "x^" << i;
        } else if(arrbaru[i] < 0){
            cout << " " << arrbaru[i] << "x^" << i;
        }
    } 
    return;
}


int main() {

    int i, n, opr, m;

    cout << "SELAMAT DATANG\nDi program ini anda bisa melakukan operasi penjumlahan, pengurangan, perkalian, serta penurunan dari polinom\n";
    cout << "Masukkan derajat tertinggi dari polinomial: ";
    cin >> n;

    int polA[n];

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
        int poliC[max];
        add(polA, poliB, max, poliC);
        printAddition(poliC, max);
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
