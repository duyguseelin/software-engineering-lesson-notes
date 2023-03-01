#include <iostream>
using namespace std;
int alanHesapla (int k1, int k2)
{
    cout<<"ilk fonksiyon "<<endl;
    return k1*k2;
}
double alanHesaplama (double k1, double k2)
{
    cout<<"ikinci fonksiyon"<<endl;
    return k1*k2;
}
double alanHesapla (int k1, double k2)
{
    cout<<"ucuncu fonksiyon"<<endl;
    return k1*k2;
}
double alanHesaplama (double k1, int k2)
{
    cout<<"dorduncu fonksiyon"<<endl;
    return k1*k2;
}
double alanHesaplama (double k)
{
    cout<<"besinci fonksiyon"<<endl;
    return k*k;
}
int main()
{
    cout<<alanHesaplama(2,3)<<endl;
    cout<<alanHesaplama(2.4,3.2)<<endl;
    cout<<alanHesaplama(3,4.1)<<endl;
    cout<<alanHesaplama(5.3,6)<<endl;
    cout<<alanHesaplama(8)<<endl;
}