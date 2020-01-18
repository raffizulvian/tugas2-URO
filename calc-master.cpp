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

// fungsi print polinom
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

