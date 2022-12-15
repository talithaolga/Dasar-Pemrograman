#include <iostream>

using namespace std;

int main()
{
    cout << "Nama\t\t: Talitha Olga Ramadhani" << endl;
    cout << "NIM \t\t: A11.2022.14110" << endl;
    cout << "Kelompok \t: A11.4104" << endl;
    cout << "Mata Kuliah \t: Dasar Pemrograman" << endl;
    cout << "------------------------------------" << endl;

    int a = 0, b = 0, c = 2;
    int bil[3][2][2];
    float rata;

    cout << "Array kelipatan 4 = ";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < 2; k++) {
                bil[i][j][k] = c;
                c += 2;
                if (c % 4 == 0) {
                    cout << c << " ";
                    a += c;
                    b += 1;
                    rata = (float)a / b;
                }
            }
        }
    }

    cout << endl;
    cout << "\nSum kelipatan 4 = " << a << endl;
    cout << "\nRata-rata kelipatan 4 = " << rata << endl;

    return 0;
}
