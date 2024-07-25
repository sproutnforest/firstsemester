#include <iostream>
using namespace std;
int main()
{
    float harga_bruto, diskon1, diskon2, harga_netto1, harga_netto2;

    cout<< "Berapa harga sebelum diskon: ";
    cin>>harga_bruto;

    cout<< "Ketikkan besaran diskon pertama (0-1): ";
    cin>>diskon1;

    cout<< "Ketikkan besaran diskon ke dua (0-1): ";
    cin>>diskon2;

    harga_netto1 = harga_bruto - harga_bruto*diskon1;
    harga_netto2 = harga_netto1 - harga_netto1*diskon2;

    cout<<"Selamat! Harga setelah diskonmu adalah Rp "<<harga_netto2<<endl;

    return 0;
}