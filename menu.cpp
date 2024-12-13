#include <iostream>
#include <conio.h>
using namespace std;

int data[100];
int n;

void dMenu() {
    system("cls");
    cout << "Aplikasi Sorting Bubble\n";
    cout << "1. Masukkan data\n";
    cout << "2. Tampilkan data\n";
    cout << "3. Sorting ascending\n";
    cout << "4. Sorting descending\n";
    cout << "5. Exit\n";
    cout << "Masukkan angka: ";
}


int main() {
    int data[100];
    char pl;

    do {
        dMenu();
        pl = getch();

        switch (pl) {
            case '1': {
                system("cls");
                cout << "Masukkan jumlah data (1-100): ";
                cin >> n;
                if (n > 0 && n <= 100) {
                    cout << "Masukkan " << n << " angka:\n";
                    for (int i = 0; i < n; i++) {
                        cout << "Data ke-" << (i + 1) << ": ";
                        cin >> data[i];
                    }
                    cout << "\nData berhasil dimasukkan!";
                } else {
                    cout << "Jumlah data tidak valid. Harus antara 1-100.";
                }
                getch();
                break;
            }
            case '2':
      tampilkanData();
      /* code */
      break;
    case '3':
      sortingAsc();
      /* code */
      break;
    case '4':
      sortingDsc();
      /* code */
      break;
    case '5':
       cout << "Terima kasih.\n";
      /* code */
      break;

    default:
      system("cls");
      cout << "Pilihan Tidak Tersedia";
      getch();
      break;
    }
    } while (pl != '5');
  return 0;
}
    
    
    
  
void tampilkanData()
{
    system("cls");
    cout << "Data yang dimasukkan:\n";
    for (int i = 0; i < n; i++)
    {
        cout << arrdata[i] << " ";
    }
    cout << "\n";
    getch();
}
void tukar(int *a, int *b)
{
  int t = *a;
  *a = *b;
  *b = t;
}

#untuk sortingAsc
void sortingAsc()
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arrdata[j] > arrdata[j + 1])
            {
                tukar(&arrdata[j], &arrdata[j + 1]);
            }
        }
    }
    cout << "Data berhasil diurutkan secara ascending.\n";
    getch();

}

#untuk sortingDsc
void sortingDsc()
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arrdata[j] < arrdata[j + 1])
            {
                tukar(&arrdata[j], &arrdata[j + 1]);
            }
        }
    }
    cout << "Data berhasil diurutkan secara descending.\n";
    getch();
}
