#include <stdio.h>
int main(){
	//ini buat yang kubus
  int rusuk, volume;

  printf("Masukkan rusuk kubus (cm)\t: ");
  scanf("%d", &rusuk);

  volume = rusuk*rusuk*rusuk;

  printf("Volume kubus\t: %d\n", volume);
	//ini buat yang balok
  float tinggi, panjang, lebar, volume1;

  printf("Masukkan tinggi balok (cm)\t: ");
  scanf("%f", &tinggi);

  printf("Masukkan lebar balok (cm) \t: ");
  scanf("%f", &panjang);

  printf("Masukkan tinggi balok (cm)\t: ");
  scanf("%f", &lebar);

  volume1 = tinggi * panjang * lebar;
  printf("Volume balok \t: %.2f cm\n", volume1);
  	//ini buat yang lingkaran
  float pi = 3.14;
  float jari, volume2;

  printf("Masukkan jari-jari bola\t: ");
  scanf("%f", &jari);

  volume2 = (4.0/3.0) * pi * jari * jari * jari;

  printf("Volume bola\t: %.2f", volume2);
  
  return 0;
}
