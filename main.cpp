#include<iostream>
#include"dikdortgen.h"
using namespace std;

int main()
{
    float uzunluk1, genislik1;
    cout<<"uzunluk giriniz";
    cin>>uzunluk1;
    cout<<"genislik giriniz";
    cin>>genislik1;
    Dikdortgen d(uzunluk1,genislik1);
    cout<<"alan="<<d.AlanHesap();
    cout<<"cevre="<<d.CevreHesap();

}