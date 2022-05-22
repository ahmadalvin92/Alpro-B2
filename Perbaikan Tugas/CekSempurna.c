// Nama File : CekSempurna.c
// Deskripsi : mengecek apakah sebuah bilangan merupakan bilangan sempurna
// Pembuat : Ahmad Alvin Griffin / 24060121140106
// Tanggal  : 22 Mei 2022

#include <stdio.h>

int main(){
    // Kamus
    int N, i, sempurna;
    sempurna = 0;
    printf("Masukan bilangan yang sempurna?");
    scanf("%d", &N);

    for(i = 1; i < N; i++){
        if(N % i == 0){
            sempurna = sempurna + i;
        }
    }
    if (N == sempurna){
        printf(" Bilangan sempurna");
    }
    else{
        printf("bukan bilangan sempurna");
    }
    return 0;
}
