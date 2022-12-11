#include <iostream>

using namespace std;

int main()
{
    cout << "Nama\t\t: Talitha Olga Ramadhani" << endl;
    cout << "NIM \t\t: A11.2022.14110" << endl;
    cout << "Kelompok \t: A11.4104" << endl;
    cout << "Mata Kuliah \t: Dasar Pemrograman" << endl;
    cout << "------------------------------------" << endl;

    int a = 0, b = 1, c = 0, d = 2;
    int bil[3][2][2];
    float rata;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < 2; k++) {
                bil[i][j][k] = d;
                d += 2;
                cout << d << " " << endl;
                c += d;
                a += b;
                rata = (float)c / a;
            }
        }
    }
    cout << "Sum kelipatan 4 = " << c << endl;
    cout << "Rata-rata sum kelipatan 4 = " << rata << endl;

    return 0;
}
