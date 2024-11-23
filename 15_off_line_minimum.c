/******************************************************************************

C dilini kullanarak, OffLineMinimum(strArr) fonksiyonunun, 1...n arasında değişen tamsayılardan 
ve “E” harfinden oluşan bir dizi olacak strArr parametresini almasını ve aşağıdaki kurallara göre doğru alt kümeyi döndürmesini sağlayın.
Girdi aşağıdaki formatta olacaktır: [“I”, “I”, “E”, “I”,..., “E”,..., “I”] burada I'ler tamsayıları temsil eder 
ve E tüm kümedeki en küçük tamsayıyı çıkarmak anlamına gelir. Bitirdiğinizde, programınız virgülle ayrılmış tam sayılardan oluşan
yeni kümeyi döndürmelidir. Örneğin: strArr [“5”, “4”, “6”, “E”, “1”, “7”, “E”, “E”, “3”, “2”] ise, programınız 4,1,5 döndürmelidir.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LEN 1000

// Yardımcı fonksiyon: Diziyi sıralayarak küçük öğeyi bulur.
int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

char *OffLineMinimum(char *strArr) {
    static char result[MAX_LEN];
    int numbers[MAX_LEN];
    int count = 0;
    int num;
    char *token = strtok(strArr, ",");

    // Dizi öğelerini işleyerek
    while (token != NULL) {
        if (token[0] == 'E') {
            // Eğer 'E' ise, en küçük öğeyi çıkar.
            if (count > 0) {
                // Diziyi sıralayıp en küçük öğeyi bul.
                qsort(numbers, count, sizeof(int), compare);
                // En küçük öğeyi al
                num = numbers[0];
                // Sonuç dizisine ekle
                char numStr[10];
                sprintf(numStr, "%d", num);
                strcat(result, numStr);
                strcat(result, ",");
                // İlk öğeyi çıkar (minumum değer)
                memmove(&numbers[0], &numbers[1], (count - 1) * sizeof(int));
                count--;
            }
        } else {
            // Eğer 'I' ise sayıyı dizimize ekle.
            num = atoi(token);
            numbers[count++] = num;
        }
        token = strtok(NULL, ",");
    }

    // Sonuçta son boşluğu temizle.
    result[strlen(result) - 1] = '\0';

    return result;
}

void main() {
    char strArr[] = "5,4,6,E,1,7,E,E,3,2";
    printf("Output: %s\n", OffLineMinimum(strArr));
}
