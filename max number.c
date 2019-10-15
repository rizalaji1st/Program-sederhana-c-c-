#include <stdio.h>
int main(void){
    int a, b, c, d, e;
    printf("masukkan nilai mahasiswa a:");
    scanf("%d", &a);
    printf("masukkan nilai mahasiswa b:");
    scanf("%d", &b);
    printf("masukkan nilai mahasiswa c:");
    scanf("%d", &c);
    if (a>b){
      d = a;
    }
    else {
      d = b;
    }
    if (d>c){
      e = d;
    }
    else {
      e = c;
    }
    printf("Nilai tertinggi adalah : %d", e);
    return 0;
}

