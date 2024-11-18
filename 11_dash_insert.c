/******************************************************************************
C dilini kullanarak, DashInsert(str) fonksiyonunun str'deki 
her iki tek sayi arasina tire ('-') eklemesini saglayin.
Ornegin: str 454793 ise cikti 4547-9-3 olmalýdýr. Sifiri tek sayi olarak saymayin.
*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

char str[] = "56730";
int size = (sizeof(str) / sizeof(str[0])) - 1;
int mode_a,mode_b, sub;
char DashInsert(char Str[]){
    for(int i=0; i<size; i++){
    printf("%c",Str[i]);
        for(int j=i+1; j<size; j++){
            mode_a = Str[i] % 2;
            mode_b = Str[j] % 2;
            sub = j - i;
           if((mode_a == 1) && (mode_b == 1) && (sub == 1)){printf("-");}
        }
    }     
}

void main()
{
    DashInsert(str);
}
