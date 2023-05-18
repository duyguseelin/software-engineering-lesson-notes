#ifndef DIKDORTGEN_
#define DIKDORTGEN_

class Dikdortgen
{
    public:
    explicit Dikdortgen(float u, float g);
    ~Dikdortgen();
    float AlanHesap();
    float CevreHesap();


    private:
    float uzunluk,genislik;

};
#endif