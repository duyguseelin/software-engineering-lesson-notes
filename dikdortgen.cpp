#include<iostream>>
#include"dikdortgen.h"
using namespace std;

Dikdortgen::Dikdortgen(float u, float g)
{
    uzunluk=u;
    genislik=g;
    cout<<"yapici fonksiyon olusturuldu";
}

Dikdortgen::~Dikdortgen()
{
    cout<<"yikici fonksiyon olusturuldu";
}

float Dikdortgen::AlanHesap()
{
    return uzunluk*genislik;
}

 float Dikdortgen::CevreHesap()
 {
    return (uzunluk+genislik)*2;
 }
