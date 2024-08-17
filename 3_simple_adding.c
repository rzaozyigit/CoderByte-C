#include <stdio.h>

int SimpleAdding(int num);

void main(){
	int val;
	printf("1 ile 1000 arasinda bir sayi giriniz: ");
	scanf("%d", &val);
	printf("Girdiginiz sayinin toplamasi: %d", SimpleAdding(val));
}

int SimpleAdding(int num){
	int i, top = 0;
	for(i = 1; i <= num; i++){
		
		top = i + top;
	}
	return top;
}
