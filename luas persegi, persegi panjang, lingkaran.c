#include <stdio.h>
int main(void){
	//ini untuk persegi
  float sisi, luas;
  printf("Masukkan sisi persegi (cm): ");
  scanf("%f", &sisi);
   
  luas = sisi*sisi;
  printf("Luas persegi adalah %.2f cm\n", luas);
  //ini untuk persegi panjang
  float panjang, lebar, luas1;
  printf("Masukkan panjang persegi panjang (cm): ");
  scanf("%f", &panjang);
  printf("Masukkan lebar persegi panjang (cm): ");
  scanf("%f", &lebar);
   
  luas1 = panjang*lebar;
  printf("Luas persegi panjang adalah %.2f cm\n", luas1);
  //ini untuk lingkaran
  float pi = 3.14;
  float jari, luas2;

  printf("Masukkan jari-jari lingkaran (cm): ");
  scanf("%f", &jari);

  luas2 = pi * jari * jari;

  printf("Luas lingkaran adalah %.2f cm", luas2);
  return 0;
}
