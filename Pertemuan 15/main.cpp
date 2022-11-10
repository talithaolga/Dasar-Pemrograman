#include <iostream>

using namespace std;

int main()
{
    int uang = 5000;
    int kode_pilihan, harga_permen, jumlah;

    cout << "--- Daftar Harga ---" << endl;
    cout << "1. Harga satuan permen = 500" << endl;
    cout << "2. Harga satuan permen = 1000" << endl;
    cout << "3. Harga satuan permen = 300" << endl;
    cout << "\nInput kode pilihan: ";
    cin >> kode_pilihan;

    switch (kode_pilihan)
    {
    case 1:
        harga_permen = 500;
        jumlah = uang/harga_permen -5;
        cout << "\nDito mendapatkan permen sebanyak " << jumlah << " buah" << endl; break;

    case 2:
        harga_permen = 1000;
        jumlah = uang/harga_permen;
        cout << "\nDito mendapatkan permen sebanyak " << jumlah << " buah" << endl; break;

    case 3:
        harga_permen = 300;
        for (int harga_permen = 300; harga_permen <= uang; harga_permen += 300) {
            jumlah += 1;
        }
        cout << "\nDito mendapatkan permen sebanyak " << jumlah << " buah" << endl; break;

    default:
        cout << "\nKode pilihan tidak ada di daftar harga" << endl; break;
    }

    return 0;
}
