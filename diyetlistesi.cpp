#include <stdio.h>

int main(int argc, const char * argv[]) {
    FILE *dl;
    dl = fopen("diyetlistesi.txt","w+");
    char isim[20];
    int kilo,cinsiyet,bmi,yas,spor,su,uyku,saglik,alerji,yemek;
    float boy,bmh,ideal;
    printf("\nisminizi giriniz:");
    scanf("%s",&isim);
    printf("boyunuzu giriniz(m): ");
    scanf("%f",&boy);
    printf("kilonuzu giriniz: ");
    scanf("%d",&kilo);
    printf("yasinizi giriniz: ");
    scanf("%d",&yas);
    printf("cinsiyetiniz kadin ise '0' erkek ise '1' giriniz: ");
    scanf("%d",&cinsiyet);
    bmi = kilo/(boy*boy);
    printf("Gunde kac saat spor yapiyorsunuz?");
    scanf("%d",&spor);
    printf("Gunde kac litre su iciyorsunuz?");
    scanf("%d",&su);
    printf("kac saat uyuyorsunuz");
    scanf("%d",&uyku);
    printf("diyeti etkiliyecek saglik probleminiz varsa '1' yoksa '2' giriniz");
    scanf("%d",&saglik);
    printf("alerjinizin oldugu bir sey varsa'1' yoksa '2' giriniz");
    scanf("%d",&alerji);
    printf("aksam 7'den sonra yemek yiyor musunuz evet ise '1' hayir ise '2'");
    scanf("%d",&yemek);
    
    
    printf("\nbmi sonucunuz: %d\n",bmi);
        if(cinsiyet==0)
    {
        bmh=665.1+(9.6*kilo)+(1.7*(boy*100))-(4.7*yas);
        ideal=45.5+(2.3*(((boy*100)/2.54)-60));
        printf("\nbmh sonucunuz: %.3f",bmh);
        printf("\nideal kilonuz: %.3f",ideal);
        if(bmh<1000)
        {
            printf("\nbmh yavastir.\n gun icerisinde en az 2 litre su tuketilmeli ve 1 saat yurus yapilmalidir.");
        }
        else if(bmh>1400)
        {
            printf("\nbmh hizlidir.\nbugday , rafine seker , muz , makarna gibi besinler tuketebilirsiniz.\n");
        }
        else{
            printf("\nbmh degeriniz normladir.\n");
        }
    }
        else
    {
        bmh = 66.5+(13.8*kilo)+(5*(boy*100))-(yas*6.8);
        ideal = 50+(2.3*(((boy*100)/2.54)-60));
        printf("bmh sonucunuz: %.3f",bmh);
        printf("\nideal kilonuz: %.3f",ideal);
        if(bmh<1200)
        {
            printf("\nbmh yavastir.\n gun icerisinde en az 2 litre su tuketilmeli ve 1 saat yuruyus yapilmalidir.");
        }
        else if(bmh>1600)
        {
            printf("\nbmh hizlidir.\nbugday , rafine seker , muz , makarna gibi besinler tuketebilirsiniz.\n");
        }
        else{
            printf("\nbmh degeriniz normladir.\n");
        }
    }
    if(bmi<18)
    {
        printf("\nzayifsiniz.\n");
        printf("\nkahvaltida:\n1 dilim peynir\n1 adet yumurta\n5-6 adet zeytin\n1 tatli kasigi recel\n3-4 dilim ekmek\nbir bardak sut\n");
        printf("\n1.ara ogun:\n2 adet kuru kayisi.\n10 adet findik.\n2 adet ceviz\nbir bardak sut\n");
        printf("\nogle yemegi:\nbir kase corba.\n1 pordiyon kirmizi et , tavuk veya balik\nbir porsiyon pilav , makarna veya borek\n2 dilim ekmek\n1porsiyon tatli\n");
        printf("\n2.ara ogun:\nbir porsiyon meyve\ntost ve ayran\n ");
        printf("\naksam yemegi:\n1 kase corba\n1 porsiyon eli sebze yemegi veya kuru baklagil yemegi\n1 porsiyon pilav , makarna veya borek\n1 kase yogurt\n2dilim ekmek\n");
        printf("\n3.ara ogun:\n1 bardak sut\n1 adet muz\n2 tam ceviz\n1 tatli kas˝g˝ bali blenderdan gecirip i√ßiniz\n");
        if(su<2){
        printf("\nGunluk en az 2 litre su icmelisiniz!");
        }
        else if(su==2){
        printf("\nSu tuketiminiz idealdir");
        }
        else{
        printf("\nSu tuketiminizi 2 litreye indirmelisiniz");
        }
        
        
        if(spor<2){
            printf("\nGunde en az iki saaat spor yapmalisiniz");
        }
        else if(spor<=2){
            printf("\nGunluk spor saatininiz uygundur");
        }
        else{
            printf("\nGunde iki saat spor yapmanizz yeterlidir");
        }
        
        if(uyku<7)
        {
            printf("\ngunluk en az 7 saat uyumaniz gerek");
        }
        else if (uyku==7)
        {
            printf("\nuyku saatiniz normaldir");
        }
        else
        {
            printf("\ngunluk 7 saatten fazla uyumamalisiniz");
        }
        if(saglik==1)
        {
            printf("\nonce saglik kurulusuna gorunun.");
        }
        else
        {
            printf("\ndiyeti uygulayabilirsiniz.");
        }
                   
                   
        if(alerji==1)
        {
            printf("\nalerjiniz oldugu urunlerin yerine baska urun tukete bilirsiniz.");
        }
        else
        {
            printf("\ndegisiklik yapmaniza gerek yok.");
        }
        
        if(yemek==1)
        {
            printf("\naksam 7'den sonra yeme aliskanligindan kurturmalisiniz");
        }
        else
        {
            printf("\naksam 7'den sonra yememeniz metabolizma icin onemli");
        }
        
                   
    }
    else if(bmi<25)
    {
        printf("\nkilonuz normaldir.\n");
        printf("\nkahvaltida:\n1 adet haslanmis yumurta\n2 dilim kepek ekmek\nbol yesillik\nyagsiz peynir\n1 adet domates 1 adet salatalik\n");
        printf("\n1.ara ogun:\n1 adet yesil elma.\n");
        printf("\nogle yemegi:\n1 kase sebze corbasi\nyarim porsiyon izgara tavuk \n");
        printf("\n2.ara ogun:\n1 kase yagsiz yogurt\n6 adet badem\n");
        printf("\naksam yemegi:\nyarim porsiyon bulgur pilavi\nyarim porsiyon kuru baklagil\nsalata\n");
        if(su<3){
        printf("\nGunluk en az 3 litre su icmelisiniz!");
        }
        else if(su==3){
        printf("\nSu t¸ketiminiz idealdir");
        }
        else{
        printf("\nSu t¸ketiminizi 3 litreye indirmelisiniz");
        }
        
        
        if(spor<2){
            printf("\nG¸nde en az iki saaat spor yapmalisiniz");
        }
        else if(spor<=2){
            printf("\nGunluk spor saatininiz uygundur");
        }
        else{
            printf("\nGunde iki saat spor yapmaniz yeterlidir");
        }
        if(uyku<7)
        {
            printf("\ngunluk en az 7 saat uyumaniz gerek");
        }
        else if (uyku==7)
        {
            printf("\nuyku saatiniz normaldir");
        }
        else
        {
            printf("\ngunluk 7 saatten fazla uyumamalisiniz");
        }
        if(saglik==1)
        {
            printf("\nonce saglik kurulusuna gorunun.");
        }
        else
        {
            printf("\ndiyeti uygulayabilirsiniz.");
        }
                   
                   
        if(alerji==1)
        {
            printf("\nalerjiniz oldugu urunlerin yerine baska urun tukete bilirsiniz.");
        }
        else
        {
            printf("\ndegisiklik yapmaniza gerek yok.");
        }
        if(yemek==1)
        {
            printf("\naksam 7'den sonra yeme aliskanligindan kurturmalisiniz");
        }
        else
        {
            printf("\naksam 7'den sonra yememeniz metabolizma icin onemli");
        }
        }
    
    
    
    else if(bmi<30)
    {
        printf("\nfazla kilolusunuz.\n");
        printf("\nkahvaltida:\nkalkinca bir bardak su.\n1 dilim tam bugday ekmek\n1 dilim yagsiz peynir\ndomates , yesillik , biber\n");
        printf("\n1.ara ogun:\nsade kefir\n");
        printf("\nogle yemegi:\nenginar\n1 kase yogurt\n1 dilim bugday ekmek\n");
        printf("\n2.ara ogun:\n1 adet galeta\n1 fincan kahve\n");
        printf("\naksam yemegi:\n1 buyuk firinda balik\nbol salata\n");
        if(su<3){
        printf("\nGunluk en az 3 litre su icmelisiniz!");
        }
        else if(su==3){
        printf("\nSu t¸ketiminiz idealdir");
        }
        else{
        printf("\nSu t¸ketiminizi 3 litreye indirmelisiniz");
        }
        
        
        if(spor<3){
            printf("\nG¸nde en az uc saaat spor yapmalisiniz");
        }
        else if(spor<=3){
            printf("\nGunluk spor saatininiz uygundur");
        }
        else{
            printf("\nGunde uc saat spor yapmaniz yeterlidir");
        }
        if(uyku<7)
        {
            printf("\ngunluk en az 7 saat uyumaniz gerek");
        }
        else if (uyku==7)
        {
            printf("\nuyku saatiniz normaldir");
        }
        else
        {
            printf("\ngunluk 7 saatten fazla uyumamalisiniz");
        }
        if(saglik==1)
        {
            printf("\nonce saglik kurulusuna gorunun.");
        }
        else
        {
            printf("\ndiyeti uygulayabilirsiniz.");
        }
                   
                   
        if(alerji==1)
        {
            printf("\nalerjiniz oldugu urunlerin yerine baska urun tukete bilirsiniz.");
        }
        else
        {
            printf("\ndegisiklik yapmaniza gerek yok.");
        }
        if(yemek==1)
        {
            printf("\naksam 7'den sonra yeme aliskanligindan kurturmalisiniz");
        }
        else
        {
            printf("\naksam 7'den sonra yememeniz metabolizma icin onemli");
        }
        }
    
    
    
    else if(bmi<35)
    {
        printf("\n1.derece obezsiniz\n");
        printf("\nkahvaltida:\nyulaf ezmesi\n");
        printf("\n1.ara ogun:\n1 dilim ananas\nbir fincan kahve\n");
        printf("\nogle yemegi:\n3 adet kofte\nsalata\n1dilim tam bugday ekmek\n");
        printf("\n2.ara ogun:\n1 avuc kuruyemis\n");
        printf("\naksam yemegi:\n1 kase sebze corbasi\n1 tabak zeytin yagli\nsalata\n");
        if(su<2){
        printf("\nGunluk en az 2 litre su icmelisiniz!");
        }
        else if(su==2){
        printf("\nSu tuketiminiz idealdir");
        }
        else{
        printf("\nSu tuketiminizi 2 litreye indirmelisiniz");
        }
        
        
        if(spor<2){
            printf("\nGunde en az iki saaat spor yapmalisiniz");
        }
        else if(spor<=2){
            printf("\nGunluk spor saatininiz uygundur");
        }
        else{
            printf("\nGunde iki saat spor yapmanizz yeterlidir");
        }
    }
    else if(bmi<40)
    {
        printf("\n2.derece obezsiniz\n");
        printf("\nkalkinca 1 bardak limonlu ilik su\n");
        printf("\nkahvaltida:\ntam bugday unuyla yapilmis krep\nyagsiz peynir\nsalatalik\nyesillik\n");
        printf("\n1.ara ogun: yesil elma\n");
        printf("\nogle yemegi:\ntavuklu salata\n");
        printf("\n2.ara ogun:\nyogurt\n3-4 adet ceviz\n");
        printf("\naksam yemegi:\nbrokoli\nsalata\n");
        if(su<3){
        printf("\nGunluk en az 3 litre su icmelisiniz!");
        }
        else if(su==3){
        printf("\nSu t¸ketiminiz idealdir");
        }
        else{
        printf("\nSu t¸ketiminizi 3 litreye indirmelisiniz");
        }
        
        
        if(spor<3){
            printf("\nG¸nde en az uc saaat spor yapmalisiniz");
        }
        else if(spor<=3){
            printf("\nGunluk spor saatininiz uygundur");
        }
        else{
            printf("\nGunde uc saat spor yapmaniz yeterlidir");
        }
        if(uyku<7)
        {
            printf("\ngunluk en az 7 saat uyumaniz gerek");
        }
        else if (uyku==7)
        {
            printf("\nuyku saatiniz normaldir");
        }
        else
        {
            printf("\ngunluk 7 saatten fazla uyumamalisiniz");
        }
        if(saglik==1)
        {
            printf("\nonce saglik kurulusuna gorunun.");
        }
        else
        {
            printf("\ndiyeti uygulayabilirsiniz.");
        }
                   
                   
        if(alerji==1)
        {
            printf("\nalerjiniz oldugu urunlerin yerine baska urun tukete bilirsiniz.");
        }
        else
        {
            printf("degisiklik yapmaniza gerek yok.");
        }
        if(yemek==1)
        {
            printf("\naksam 7'den sonra yeme aliskanligindan kurturmalisiniz");
        }
        else
        {
            printf("\naksam 7'den sonra yememeniz metabolizma icin onemli");
        }
        }
    
    else
    {
        printf("\n3.derece obezsiniz");
        printf("\ngun boyu suya limon , maydonoz sapi , tarcin koyup tuketiniz\n");
        printf("\nkahvaltida:\n1 adet haslanmis yumurta\n light peynir\n 4-5 adet zeytin\nsalatalik\nmaydonoz , roka , dereotu\n1 kasik corek otu\n");
        printf("\n1.ara ogun:\n sade kefir\n");
        printf("\nogle yemegi:\nkabak\nyogurt\n");
        printf("\n2.ara ogun:\n3-4 adet kuru kayisi\n1 fincan kahve\n");
        printf("\naksam yemegi:\ntavuklu salata\n");
        if(su<3){
        printf("\nGunluk en az 2 litre su icmelisiniz!");
        }
        else if(su==3){
        printf("\nSu tuketiminiz idealdir");
        }
        else{
        printf("\nSu tuketiminizi 3 litreye indirmelisiniz");
        }
        
        
        
        if(spor<3){
            printf("\nGunde en az uc saaat spor yapmalisiniz");
        }
        else if(spor<=3){
            printf("\nGunluk spor saatininiz uygundur");
        }
        else{
            printf("\nGunde uc saat spor yapmaniz yeterlidir");
        }
        if(uyku<7)
        {
            printf("\ngunluk en az 7 saat uyumaniz gerek");
        }
        else if (uyku==7)
        {
            printf("\nuyku saatiniz normaldir");
        }
        else
        {
            printf("\ngunluk 7 saatten fazla uyumamalisiniz");
        }
        if(saglik==1)
        {
            printf("\nonce saglik kurulusuna gorunun.");
        }
        else
        {
            printf("\ndiyeti uygulayabilirsiniz.");
        }
                
                
        if(alerji==1)
        {
            printf("\nalerjiniz oldugu urunlerin yerine baska urun tukete bilirsiniz.");
        }
        else
        {
            printf("\ndegisiklik yapmaniza gerek yok.");
        }
        if(yemek==1)
        {
            printf("\naksam 7'den sonra yeme aliskanligindan kurturmalisiniz");
        }
        else
        {
            printf("\naksam 7'den sonra yememeniz metabolizma icin onemli");
        }
        }
    
    fprintf(dl,"Is˝m\t - Boy\t - Kilo\t - Yas\t\n");
    fprintf(dl,"%s \t - %.2lf\t - %d\t - %d\t",isim,boy,kilo,yas);
    return 0;
}
