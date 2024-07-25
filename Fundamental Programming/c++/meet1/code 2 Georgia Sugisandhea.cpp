#include <iostream>
using namespace std;
int main()
{
    float harga_bruto, diskon, harga_netto;

    cout<< "Berapa harga sebelum diskon: ";
    cin>>harga_bruto;

    cout<< "Berapa besaran diskon (0 - 1):";
    cin>>diskon;

    harga_netto = harga_bruto - harga_bruto*diskon;

    cout<<"Selamat! Setelah diskon harga kamu adalah Rp "<< harga_netto <<endl;

    return 0;
}