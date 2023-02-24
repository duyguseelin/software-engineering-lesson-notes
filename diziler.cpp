#include <stdio.h>


//5 elemanlı 1 ve 3. elemanları ekrana yazdır
   /*
    int dizi[5]={12,34,56,35,67};
    printf("%d\n",dizi[0]);
    printf("%d\n",dizi[2]);
    */
    
    
//dizinin tüm elemanlarını ekrana yazdır (göngü kullanarak)
    /*
    int i;
    int dizi[5]={14,7,89,55,98};
    for(i=0;i<5;i++)
    {
        printf("%d\n",dizi[i]);
    }
*/
    


// dizinin tüm elemanlarını ekrana yazdırın (fonk kullan parametreli geri deger döndürmesin)
/*
void dizigoster(int diziler[])
{
    int i;
    for(i=0;i<7;i++)
    {
        printf("dizi[%d]=%d\n",i,diziler[i]);
    }
    }
    int main(int argc, const char * argv[]) {
        int diziler[7]={1,2,5,8,9,6,11};
        dizigoster(diziler);
 */

/*
//5 elemanlı bir dizide elemanlar kullanıcıdan alınıcak ve toplanıcak
int dizi[5];
int i, toplam=0;
for(i=1;i<5;i++)
{
    printf("%d deger giriniz:",i);
    dizi[i];
    scanf("%d",&dizi[i]);
    toplam=toplam+dizi[i];
    }
printf("toplamlari=%d",toplam);
*/


/*
//7 elemalı dışarıdan girilen bir dizinin 100 ve 200 arasındali olanları %10 artır
float dizi[7];
int i, j;
for(i=1;i<=7;i++)
{
    printf("%d.sayi giriniz",i);
    scanf("%f",&dizi[i]);
    if(dizi[i]<=200 && dizi[i]>=100)
    {
        dizi[i]=dizi[i]*110/100;
    }
    for(j=1;j<=7;j++)
    {
        printf("%d.sayinin sonucunu: %.2f \n",j,dizi[j]);
    }
    }
 */

/*
//sınıftaki 10 kişinin boyu alıp yazdırmak
int i;
float boy[10]={1.70,1.80,1.50,1.20,2.00,3.12,1.58,1.66,1.97,1.43}
for(i=0;i<10;i++)
{
    printf("%f",boy [i]);
    }
 */

   
