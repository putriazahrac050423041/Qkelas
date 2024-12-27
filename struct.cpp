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
void hapusDataM(int p) {
    if (p >= 0 && p <= pos) {
        for (int i = p; i < pos; i++) {
            sikc[i] = sikc[i + 1];
        }
        pos--;
        cout << "\nData mahasiswa SIKC-3B berhasil dihapus!\n";
    } else {
        cout << "\nIndeks mahasiswa SIKC-3B tidak valid!\n";
    }
    cin.get();
}
int main() {
    char pl;
    do {
        dMenu();
        pl = getch();
        switch (pl) {
            case '1': {
                int jml;
                system("cls");
                cout << "Jumlah mahasiswa SIKC-3B yang ingin ditambahkan: ";
                cin >> jml;
                cin.ignore();
                for (int i = 0; i < jml; i++) {
                    masukanData();
                }
                break;
            }
            case '2': {
                tampilkanData();
                break;
            }
            case '3': {
                int ubahdt;
                system("cls");
                cout << "Masukkan nomor mahasiswa SIKC-3B yang ingin diperbaiki: ";
                cin >> ubahdt;
                if (ubahdt >= 1 && ubahdt <= pos + 1) {
                    perbaikanData(ubahdt - 1);
                } else {
                    cout << "\nNomor mahasiswa SIKC-3B tidak valid!\n";
                    cin.get();
                }
                break;
            }
            case '4': {
                int hapusdt;
                system("cls");
                cout << "Masukkan nomor mahasiswa SIKC-3B yang ingin dihapus: ";
                cin >> hapusdt;
                if (hapusdt >= 1 && hapusdt <= pos + 1) {
                    hapusDataM(hapusdt - 1);
                } else {
                    cout << "\nNomor mahasiswa SIKC-3B tidak valid!\n";
                    cin.get();
                }
                break;
            }
            case '5':
                system("cls");
                cout << "Keluar dari program.\n";
                break;
            default:
                system("cls");
                cout << "Pilihan tidak tersedia.\n";
                cin.get();
                break;
        }
    } while (pl != '5');
    return 0;
}
