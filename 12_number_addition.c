/******************************************************************************

C dilini kullanarak, NumberSearch(str) islevinin str parametresini almasini, 
dizedeki tüm sayilari aramasini, bunlari toplamasini ve ardindan bu son sayiyi dondurmesini saglayin.
Ornegin: str “88Hello 3World!” ise cikti 91 olmalidir. Yukaridaki ornekte oldugu gibi
tek basamakli sayilar ile cok basamaklı sayilar arasinda ayrim yapmaniz gerekecektir. 
Yani “55Hello” ve “5Hello 5” iki farkli yanit dondurmelidir. Her dize en az bir harf veya sembol icerecektir.

*******************************************************************************/
#include <stdio.h>
#include <stdint.h>
#include <string.h>
/*******************************************************************************/
#define NUMBER_SIZE 10
/*******************************************************************************/
int NumbersNames[NUMBER_SIZE] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
int charNumbers[NUMBER_SIZE]  = {48, 49, 50, 51, 52, 53, 54, 55, 56, 57}; // sayilarin ascii karsiligi
int multipyCoe[6] = {1,10,100,1000,10000,100000};
/*******************************************************************************/
char strSum[] = "75Number9";
int size = (sizeof(strSum) / sizeof(strSum[0])) - 1;
/*******************************************************************************/
void getNumberwInt(char SumStr[], int sumInt[]){
    int counter = 0,k=0;
    for(int i = 0; i < size; i++){
        sumInt[k] = 0; 
        for(int j = 0; j < NUMBER_SIZE; j++){
            if(SumStr[i] == charNumbers[j]){
                if(SumStr[i-1] == 45){NumbersNames[j] *= -1;}    
                sumInt[k] =  NumbersNames[j];
                sumInt[--k] *= multipyCoe[counter];
                counter++; 
                k +=2;
                break; 
            }
        }
        if(sumInt[k] != SumStr[i-1]){counter=0;}        
    }
}
/*******************************************************************************/
int NumberSearch(char SumStr[]){
    int tempIntArr[size];
    int sumofArr = 0;

    getNumberwInt(SumStr, tempIntArr);
    for(int i = 0; i < size; i++){
        sumofArr += tempIntArr[i];
    }
    return sumofArr;     
}
/*******************************************************************************/
int main(){
    printf("Sum of Array Numbers: %d\n", NumberSearch(strSum));
    return 0;
}
/*******************************************************************************/