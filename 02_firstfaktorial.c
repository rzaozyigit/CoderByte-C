#include <stdio.h>
#include <stdint.h>
uint16_t firstfactorial(uint16_t val);
int num;
void main(){
	printf("1 ile 8 arasinda bir sayi giriniz.");
	scanf("%d",&num);
	printf("Girdiginiz sayinin faktoriyeli: %d", firstfactorial(num));
}

uint16_t firstfactorial(uint16_t val){
	int i, fact = 1;
	for(i = 1; i <= val; i++){
		fact = fact * i;
	}
	return fact;
}
