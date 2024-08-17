#include <stdio.h>
#include <stdint.h>

int TimeConvert(int num);

void main(){
/*	uint8_t val;
	printf("Sureyi dakika cinsinden giriniz: ");
	scanf("%d",&val);
	TimeConvert(val); */
	TimeConvert(120);
	TimeConvert(35);
	TimeConvert(256);
	TimeConvert(308);
	TimeConvert(935);
}
int TimeConvert(int num){
	int minutes, hours;
	minutes = num % 60;
	hours   = num / 60;
	printf("%d : %d \n", hours, minutes);
}
