/*C dilini kullanarak, MeanMode(arr) fonksiyonunun arr iciinde saklanan sayi dizisini almasini 
ve mod ortalamaya esitse 1, esit degilse 0 dondurmesini saglayin 
(yani [5, 3, 3, 3, 1] 1 dondurmelidir 
cunku mod (3) ortalamaya (3) esittir). 
Dizi bos olmayacak, yalnizca pozitif tamsayilar icerecek ve birden fazla mod icermeyecektir.*/

#include <stdio.h>

int MeanMode(int arr[], int size) {
    int sum = 0, mode = 0, tempVal = 0, maxCount = 0;

    // Ortalama hesapla
    for(int k = 0; k < size; k++) {
        sum += arr[k];
    }
    int mean = sum / size;

    // Mod hesapla
    for(int i = 0; i < size; i++) {
        int count = 0;
        for(int j = 0; j < size; j++) {
            if (arr[j] == arr[i]) {
                count++;
            }
        }
        if(count > maxCount) {
            maxCount = count;
            mode = arr[i];
        }
    }

    // Mod ve ortalamayi karsilastir
    if (mode == mean) {
        tempVal = 1;
    } 
    
    return tempVal;
}

int main() {
    int arr[] = {4, 4, 4, 6, 2};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("MeanMode State: %d\n", MeanMode(arr, size));  //cikti: MeanMode State: 1

    return 0;
}
