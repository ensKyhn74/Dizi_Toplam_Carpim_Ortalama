#include <stdio.h>
// dizinin elemanlarının toplamını,çarpımını ve ortalamasını bul

int main() 

{
    
 int dizi[5] = {2,6,8,5,7};    
 int i;
 int toplam = 0;
 int carpim = 1;
 
 for(i = 0 ; i < 5 ; i++)
 {
  toplam += dizi[i];
  carpim *= dizi[i];
 }
 
 printf("dizinin elemanlarinin toplami: %d\n",toplam);
 printf("dizinin elemanlarinin carpimi: %d\n",carpim);
 printf("dizinin elemanlarinin ortalamasi: %.2f\n",toplam/5.0);
 
 return 0;
  
}