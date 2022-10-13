#include <iostream>

using namespace std;

int main()
{
    cout << "Nama \t\t: Talitha Olga Ramadhani" << endl;
    cout << "NIM \t\t: A11.2022.14110" << endl;
    cout << "Kelompok \t: A11.4104" << endl;
    cout << "Mata Kuliah \t: Dasar Pemrograman" << endl;
    cout << "\n";
    cout << "-----------------" << endl;
    cout << "Deret Fibonacci" << endl;
    cout << "-----------------" << endl;
    cout << "\n";

    int f_1 = 0, f_2 = 1, hasil = 0, n = 12;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            f_1 = f_2;
            f_2 = hasil;
            cout << hasil << " ";
            hasil = f_1 + f_2;
        }

    f_1 = 0;
    f_2 = 1;
    hasil = 0;
    cout << "\n";
}
    return 0;
}
