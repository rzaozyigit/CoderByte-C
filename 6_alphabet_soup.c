#include <stdio.h>
#include <string.h>

int AlphabetSoup(char str[]);

void main(){
 	char input1[] = "coderbyte";
    AlphabetSoup(input1);
    printf("Input: coderbyte\nOutput: %s\n", input1);
	
	return 0;
}

int AlphabetSoup(char str[]){
    int length = strlen(str);
	int i = 0;
	int j = 0;
    for (i = 0; i < length - 1; i++) {
        for (j = 0; j < length - i - 1; j++) {
            if (str[j] > str[j + 1]) {
                char temp = str[j];
                str[j] = str[j + 1];
                str[j + 1] = temp;
            }
        }
    }
}
