/******************************************************************************

C dilini kullanarak, PowersofTwo(num) fonksiyonunun bir tamsayı olacak şekilde 
geçilen num parametresini almasını ve ikinin kuvveti ise true dizesini döndürmesini sağlayın. 
Değilse false dizesini döndürür. Örneğin, girdi 16 ise programınız true dizesini döndürmelidir,
ancak girdi 22 ise çıktı false dizesi olmalıdır.

** Eger bir sayı 2'nin kuvveti ise,
** yalnizca en yüksek bitinde '1' bulunur ve bu sayi (num & (num - 1)) == 0 kosulunu saglar.

*******************************************************************************/
#include <stdio.h>
int getPowersTwo();
int PowersofTwo(int num){
    if(num > 0 && (num & (num - 1)) == 0){
        printf("TRUE");
    }
    else{
        printf("FALSE");
    }    
}

void main()
{
    int tempVal;
    printf("Bir sayi giriniz: \n");
    scanf("%d",&tempVal);
    PowersofTwo(tempVal);
}