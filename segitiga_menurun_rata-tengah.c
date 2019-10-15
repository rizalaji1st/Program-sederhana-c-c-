#include <stdio.h>
int main(){
	int x, y, z, sp, a, i;
	printf("Masukkan jumlah baris: ");
	scanf("%d", &y);
	z = y;
	for(i=0; i<z; i++){
		for(sp = z - y; sp > 0; sp--){
			printf(" ");
		}
		for(x = 0; x < y; x++){
			printf("*");
		}
		for(x = 0; x < y - 1; x++){
			printf("*");
		}
	printf("\n");
	y = y - 1;
	}
}
