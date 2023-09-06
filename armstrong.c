#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
int sayi,n,toplam=0;
printf("lutfen sayiyi giriniz:");
scanf("%d",&sayi);
int x=sayi;
while(sayi!=0){
	n=sayi%10;
	toplam=toplam+n*n*n;
	sayi=sayi/10;
}
if(x==toplam){
	printf("sayimiz bir armstrong sayisidir.");
}
else{
	printf("sayimiz bir armstrong sayisi degildir");
}
	return 0;
}
