#include <stdio.h>
 
int main()
{
  int n, c, k, baris = 1;
  printf("Masukkan jumlah baris\n");
  scanf("%d", &n);
  baris = n - 1;
  
  for (k = 1; k <= n; k++)
  {
    for (c = 1; c <= baris; c++)
      printf(" ");
    baris--;
    for (c = 1; c <= 2*k-1; c++)
      printf("*");
    printf("\n");
  }
  baris = 1;
 
  for (k = 1; k <= n - 1; k++){
    for (c = 1; c <= baris; c++)
      printf(" ");
    baris++;
    for (c = 1 ; c <= 2*(n-k)-1; c++)
      printf("*");
 
    printf("\n");
  }
   
  return 0;
}
