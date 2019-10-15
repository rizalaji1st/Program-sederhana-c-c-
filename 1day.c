#include <stdio.h>
/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/


int main(void){
    int a, b, c, d, e, f, g;
    printf("masukkan 4 data nilai :");
    scanf("%d %d %d %d", &a, &b, &c, &d);
    if (a>b){
      e = a;
    }
    else {
      e = b;
    }
    if (c>d){
      f = c;
    }
    else {
      f = d;
    }
    if (e>f){
      g = e;
    }
    else {
      g = f;
    }
    printf("Nilai tertinggi adalah : %d", g);
    return 0;
}

