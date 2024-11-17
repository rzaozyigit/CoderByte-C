#include <stdio.h>

#define 	VAL1	10
#define		VAL2	25

int checkNums(int num1, int num2);
 

void main(){
	
	printf("%d", checkNums(VAL1,VAL2));
}

int checkNums(int num1, int num2){
	
	if(num2 > num1){
		
		return 1;
	}
	else if(num2 < num1){
		
		return 0;
	}
	
	else
	
	return -1;
}
