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
void masukanData() {
    pos++;
    system("cls");
    cout << "Masukkan data mahasiswa SIKC-3B ke-" << (pos + 1) << ":" << endl;
    cin.ignore();
    cout << "Masukkan NIM: ";
    getline(cin, sikc[pos].nim);
    cout << "Masukkan Nama: ";
    getline(cin, sikc[pos].nama);
    cout << "Masukkan Alamat: ";
    getline(cin, sikc[pos].alamat);
    cout << "Masukkan IPK: ";
    cin >> sikc[pos].ipk;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << "\nData mahasiswa berhasil ditambahkan!\n";
    cin.get();
}
void tampilkanData() {
    system("cls");
    if (pos >= 0) {
        cout << "Menampilkan Data Mahasiswa SIKC-3B\n" << endl;
        for (int i = 0; i <= pos; i++) {
            cout << (i + 1) << ". NIM: " << sikc[i].nim
                 << "\n   Nama: " << sikc[i].nama
                 << "\n   Alamat: " << sikc[i].alamat
                 << "\n   IPK: " << sikc[i].ipk << "\n";
            cout << "-----------------------------------\n";
        }
    } else {
        cout << "Belum ada data mahasiswa yang dimasukkan.\n";
    }
    cin.get();
}
void perbaikanData(int p) {
    system("cls");
    if (p >= 0 && p <= pos) {
        cout << "Perbaiki data mahasiswa SIKC-3B ke-" << (p + 1) << ":\n";
        cin.ignore();
        cout << "Masukkan Nama baru: ";
        getline(cin, sikc[p].nama);
        cout << "Masukkan Alamat baru: ";
        getline(cin, sikc[p].alamat);
        cout << "Masukkan IPK baru: ";
        cin >> sikc[p].ipk;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "\nData mahasiswa SIKC-3B berhasil diperbaiki!\n";
    } else {
        cout << "Indeks mahasiswa SIKC-3B tidak valid!\n";
    }
    cin.get();
}

