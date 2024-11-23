/******************************************************************************

C dilini kullanarak HammingDistance(strArr) fonksiyonunu yazın. Bu fonksiyon, 
strArr içinde saklanan diziye parametre olarak alacaktır. Bu dizi yalnızca eşit uzunluktaki 
iki dize içerecek ve fonksiyon, bu dizeler arasındaki Hamming mesafesini döndürecektir. 
Hamming mesafesi, karşılık gelen karakterlerin farklı olduğu pozisyonların sayısıdır.

Örneğin: Eğer strArr ["coder", "codec"] ise, programınız 1 döndürmelidir. 
Dizeler her zaman eşit uzunlukta olacak ve yalnızca alfabedeki küçük harfler ile rakamları içerecektir.

*******************************************************************************/
#include <stdio.h>
#include <string.h>

int HammingDistance(char str1[], char str2[]) {
    int distance = 0;
    int length = strlen(str1); // Dizelerin uzunluğunu alıyoruz (eşit uzsunlukta oldukları garanti)

    for (int i = 0; i < length; i++) {
        if (str1[i] != str2[i]) { // Karakterler farklıysa
            distance++;
        }
    }

    return distance; // Hamming mesafesini döndür
}

int main() {
    char strArr[2][100] = {"coder", "codec"}; // İki string tanımlanır

    int result = HammingDistance(strArr[0], strArr[1]); // Fonksiyon çağrısı
    printf("Hamming Distance: %d\n", result);

    return 0;
}