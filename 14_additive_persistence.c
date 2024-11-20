/******************************************************************************

C dilini kullanarak, AdditivePersistence(num) fonksiyonunun 
her zaman pozitif bir tamsayi olacak olan num parametresini almasini ve 
tek bir rakama ulasana kadar num'daki rakamlari kaç kez toplamaniz gerektigini gosteren 
toplama kaliciligini dondurmesini saglayin.
Ornegin: num 2718 ise programiniz 2 dondurmelidir
cunku 2 + 7 + 1 + 8 = 18 ve 1 + 8 = 9'dur ve 9'da durursunuz.

*******************************************************************************/
#include <stdio.h>


int AdditivePersistence(int num){
    int count = 0;

    // Num tek basamaklı olana kadar işlemi tekrarla
    while (num >= 10) {
        int sum = 0;
        
        // Rakamları toplama
        while (num > 0) {
            sum += num % 10;  // num'un son rakamını ekle
        printf("sum: %d\n",sum);    
            num /= 10;        // bir basamak sağa kaydır
        }
        
        // Sonucu güncelle
        num = sum;
        count++;  // Her işlem sonrası sayacı arttır
    }

    return count;
}

void main()
{
    printf("%d",AdditivePersistence(2178));
}