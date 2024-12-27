#include <iostream>
#include <string>
#include <conio.h>
using namespace std;

struct mahasiswa {
string nim;
string nama;
string alamat;
float ipk;
};

void dMenu(){
system("cls");
cout<<"Aplikasi Mahasiswa SIKC-3B"<<"\n";       
cout<<"1. Masukkan data mahasiswa"<<"\n";            
cout<<"2. Tampilkan data mahasiswa"<<"\n";            
cout<<"3. Perbaiki data mahasiswa"<<"\n";           
cout<<"4. Hapus data mahasiswa"<<"\n";            
cout<<"5. Exit"<<"\n";           
cout<<"Masukan angka :";        
}

mahasiswa sikc[30];
int pos=-1;

