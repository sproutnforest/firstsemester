#include <iostream>
#include <string>
using namespace std;
int main()
{
    float tugas, uts, uas, nilai;
    string nama, npm;
     cout<< "Nama kamu siapa? ";
     getline(cin,nama);

     cout<< "Npm kamu apa? ";
     cin>>npm;

     cout<<"Masukkan nilai tugas: ";
     cin>>tugas;

     cout<<"Masukkan nilai uts: ";
     cin>>uts;
     
     cout<<"Masukkan nilai uas: ";
     cin>>uas;

     nilai = 0.4*tugas + 0.3*uts + 0.3*uas;

     cout<<endl<<"======================================Transkrip Nilai======================================"<<endl;
     cout<<"Mahasiswa beratas nama "<<nama<<" dengan NPM "<<npm<< " memiliki nilai tugas sebesar "<<tugas<<" dan nilai uts " <<uts<< " serta nilai uas "<<uas;
     cout<<" Sehingga memiliki nilai akhir "<<nilai<<endl;

     cout<<endl<<"======================================Selesai======================================";
     return 0;


}