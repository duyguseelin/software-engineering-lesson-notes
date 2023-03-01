#include<stdio.h>
int main(){

int sayi, ters, kalan, k, m, i, r, ilkSayi, loopsayi; //degişkenleri tanımlıyoruz
        printf("Bir sayi giriniz : "); //ekrana 'bir sayı giriniz' yazdırır.
        scanf("%d", & ilkSayi);//istediğimiz sayıya kadar çalıştırmak için bir değer veriyor.
        
        
        for (sayi=1;sayi<ilkSayi;sayi++) //1 den girdiğimiz sayıya kadar 1er1er artarak dön.
        {
            r = 0; // sayaç olarak çalışır (tersinin)
            k = 0; // sayaç olarak çalışır (sayının)
            loopsayi = sayi; //değişkenlerimize işlem uyguladığımız için iki değişken aynı d.
            
            for (m = 2; m < loopsayi; m++)//sayımızın asallığını kontrol eden döngü
            {
                if (loopsayi % m == 0)//eğer bölümünden kalan0 yani bölünebiliyorsa k'yı artı
                {
                    k++; //k=0 ise bu sayı asaldır
                    break; //işlemden çık
                }
            }
        
            if (k == 0) //k asal bir sayı ise eğer
            {
                ters=0; // her döngüye girdiğinde ters=0 olarak başlasın
                while (loopsayi > 0) //sayının tersini bulduğumuz döngü
                {
                    kalan = loopsayi % 10;
                    ters = ters * 10 + kalan;
                    loopsayi = loopsayi / 10;//loopsayıya işlem uyg. için loopsayı=sayı dedik
                }
                
                for (i = 2; i < ters; i++) //sayının tersinin asallığını kontrol ettiğimiz d.
                {
                    if (ters % i == 0)//eğer bölümünden kalan0 yani bölünebiliyorsa k'yı artı
                    {
                        r++; //r=0 ise bu sayının tersi asaldır
                        break; //işlemden çık.
                    }
                }
                
                if (r != 0) //eğer sayının tersi asal değilse...
                {
                    printf("%d \n",sayi); //sayının tersi asal değilse bu sayıyı yazdır.
                }
            }
            else //sayı asal değilse...
            {
                printf("%d \n", loopsayi); //sayı asal değilse bu sayıyı yazdır.
            }
        }
        return 0;
    }