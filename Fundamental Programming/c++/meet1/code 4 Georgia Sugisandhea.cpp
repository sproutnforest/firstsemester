#include <iostream> //case sensitive
using namespace std;

int main ()
{
    //variable declaration
    int hari, upah, bayar;

    //lama hari kerja
    cout<<"Berapa hari kamu bekerja: "; //cout output, cin input
    cin>>hari;

    //mengetahui upah harian
    cout<<"Berapa upah perhari: ";
    cin>>upah;

    //menghitung upahnya
    bayar = upah*hari;

    //menampilkan hasil
    cout<<"Besarnya upah sebulan = Rp " << bayar << endl;
    return 0;
}