#include <stdio.h>

int main()
{
    // Deklarasi variabel variabel yang akan digunakan
    int i, j, k;
    int wordNum;

    // Meminta input berupa jumlah kata yang akan dicek
    scanf("%d", &wordNum);

    // Deklarasi array array yang akan digunakan
    char word[wordNum][1000];
    int length[wordNum];
    int checker[wordNum]; // Akan menampung penanda tiap kata apakah palindrome atau bukan

    // Looping digunakan untuk meminta input kata yang akan dicek
    for(i = 0; i < wordNum; i++) {
        scanf("%s", &word[i]);
        length[i] = strlen(word[i]) - 1;
        // Setelah diinput kata tersebut langsung dicek dengan looping khusus
        for(j = 0; j <= length[i]; j++) {
            if(word[i][j] == word[i][length[i]--]) {
                checker[i] = 1;
                // Penanda akan bernilai 1 jika suatu huruf dalam kata sama dengan
                // huruf lain yang memiliki urutan sama namun dari arah sebaliknya
            }
            else {
                checker[i] = 0;
                // Penanda akan bernilai 0 jika terdapat huruf dalam kata yang tidak
                // sama dengan huruf lain yang memiliki urutan sama namun dari
                break; // Akan langsung keluar dari loop karena pasti bukan palindrome
            }
        }
    }

    // Looping untuk mencetak hasil pengecekan tiap kata
    for(k = 0; k < wordNum; k++) {
        if(checker[k] == 1) {
            printf("YA\n");
        }
        else {
            printf("TIDAK\n");
        }
    }

    return 0;
}
