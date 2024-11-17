#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char ABCheck(char str[]);
#define TRUE  1
#define FALSE 0
int main(){
	char str[] = "Laura sobs";
	
	ABCheck(str);
	return 0;
}

char ABCheck(char str[]){
	int i, j;
	int str_len =  strlen(str);
	 for(i = 0; i < str_len - 4; i++){
	 	for(j = str_len; j > 3;  j--){
	 		if(('a' == str[i] && 'b' == str[i + 4]) ||
        	  ('b' == str[i] && 'a' == str[i + 4])  ||
        	  ('a' == str[j] && 'b' == str[j - 4])  ||
        	  ('b' == str[j] && 'a' == str[j - 4])){
			  	printf("TRUE");
	 			return 1;
		 	}
		}
	 }
	 		 	printf("FALSE");
		 		return 0;
}
