#include <stdio.h>
#include <stdlib.h>

/* Main fonksiyonu i�erisinde verilen say�n�n basamaklar�n� toplam�n� rek�rsif bir fonksiyon kullanarak
bulunuz.*/



int topla(int);

int main(){
	int sayi;
	printf("Sayinizi giriniz : "); scanf("%d",&sayi);
	
	printf("\nBasamaklarin toplami ==> %d",topla(sayi));
	
	return 0;
}

int topla(int x){
	if(x==0)
		return 0;
		
	else
		return x%10 + topla(x/10);	
}
