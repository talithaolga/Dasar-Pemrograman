#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

int main()
{
    cout << "Nama \t\t: Talitha Olga Ramadhani" << endl;
    cout << "NIM \t\t: A11.2022.14110" << endl;
    cout << "Kelompok \t: A11.1404" << endl;
    cout << "Mata Kuliah \t: Dasar Pemrograman" << endl;

    string jurusan[3] = {"Teknik Informatika", "Sistem Informasi", "Desain Komunikasi Visual"};
    string mahasiswa[4] = {"Freshman", "Sophomore", "Junior", "Senior"};

    int a, b;
    cout << "\n==Daftar Jurusan==" << endl;
    cout << "1. " << jurusan[0] << endl;
    cout << "2. " << jurusan[1] << endl;
    cout << "3. " << jurusan[2] << endl;

    cout << "\n==Kategori Mahasiswa==" << endl;
    cout << "1. Semester 1-2 = " << mahasiswa[0] << endl;
    cout << "2. Semester 3-4 = " << mahasiswa[1] << endl;
    cout << "3. Semester 5-6 = " << mahasiswa[2] << endl;
    cout << "4. Semester 7-8 = " << mahasiswa[3] << endl;

    cout << "\nMasukkan jurusan Anda: ";
    cin >> a;

    cout << "Masukkan semester Anda: ";
    cin >> b;

    cout << "\n-----------------------------------------" << endl;

    if(b >= 1 && b <= 2) {
        cout << "\nJurusan anda adalah " << jurusan[a-1] << "." << endl;
        cout << "Anda dalam kategori " << mahasiswa[0] << " year." << endl;
    } else if (b >= 3 && b<= 4) {
        cout << "\nJurusan anda adalah " << jurusan[a-1] << "." << endl;
        cout << "Anda dalam kategori " << mahasiswa[1] << " year." << endl;
    } else if (b >= 5 && b<= 6) {
        cout << "\nJurusan anda adalah " << jurusan[a-1] << "." << endl;
        cout << "Anda dalam kategori " << mahasiswa[2] << " year." << endl;

    } else if (b >= 7 && b<= 8) {
        cout << "\nJurusan anda adalah " << jurusan[a-1] << "." << endl;
        cout << "Anda dalam kategori " << mahasiswa[3] << " year." << endl;

    } else {
        cout << "\nIsilah data sesuai yang tertera" << endl;
    }
    return 0;
}
