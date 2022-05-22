// Nama File : Kuadran.c
// Deskripsi : Melakukan pengecekan mengenai kuadran sebuah titik P
// Pembuat : Ahmad Alvin Griffin / 24060121140106
// Tanggal : 22 mei 2022

#include <stdio.h>

int main(){
 //Kamus
 int a;
 int b;

 //Algoritma
 printf("Menentukan Kuadran Titik P");
 printf("Masukan koordinat a : ");
 scanf("%d", &a);
 printf("Masukan koordinat b : ");
 scanf("%d", &b);

 if(a > 0 && b > 0)
  printf("Kuadran I");
 else if(a < 0 && b > 0)
  printf("Kuadran II");
 else if(a < 0 && b < 0)
  printf("Kuadran III");
 else if(a > 0 && b < 0)
  printf("Kuadran IV");
 else
  printf("Titik Nol");
 return 0;
}
