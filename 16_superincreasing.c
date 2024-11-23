/******************************************************************************

C dilini kullanarak, Superincreasing(arr) fonksiyonunun arr içinde saklanan sayı dizisini almasını 
ve dizideki her bir elemanın önceki tüm elemanların toplamından daha büyük olduğu süper artan bir dizi 
oluşturup oluşturmadığını belirlemesini sağlayın. Dizi yalnızca pozitif tamsayılardan oluşacaktır.
Örneğin: arr [1, 3, 6, 13, 54] ise, programınız “true” dizesini döndürmelidir çünkü süper artan bir dizi 
oluşturur. Süper artan bir dizi oluşturulmamışsa, programınız “false” dizesini döndürmelidir.

Sample test cases:

Input:  1,2,3,4
Output: "false"

Input:  1,2,5,10
Output: "true"

*******************************************************************************/
#include <stdio.h>

/*******************************************************************************/
int IncArr[] = {1,3,6,13,54};
int size = (sizeof(IncArr) / sizeof(IncArr[0])) - 1;
/*******************************************************************************/
int Superincreasing(int *tempArr){
    int sum, tempCoe;
    sum = 0;
    tempCoe = 0;
    
    for(int i=1;i<size;i++){
        sum += tempArr[i-1];
      if(sum < tempArr[i]){
        tempCoe = 1;  
      } 
      else{
        tempCoe = 0;
        break;
      }
    } 
    (tempCoe == 1) ? printf("TRUE"):printf("FALSE");
}

void main()
{
    Superincreasing(IncArr);
}