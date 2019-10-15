#include <stdio.h>
int main(void){
  char nama[256];
  char nim[256];
  char univ[256];
  int tahunLahir;

  printf("Masukkan nama\t\t: ");
  gets(nama);

  printf("Masukkan NIM\t\t: ");
  gets(nim);
  
  printf("Masukkan asal univ\t: ");
  gets(univ);

  printf("Masukkan tahun lahir\t: ");
  scanf("%d", &tahunLahir);

  printf("\nNama\t: %s", nama);
  printf("\nNIM\t: %s", nim);
  printf("\nUNIV\t: %s", univ);
  printf("\nUmur\t: %d", 2019-tahunLahir);
  
  return 0;
}
