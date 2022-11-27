#include <iostream>

using namespace std;

int main()
{
    cout << "Nama \t\t: Talitha Olga Ramadhani" << endl;
    cout << "NIM \t\t: A11.2022.14110" << endl;
    cout << "Kelompok \t: A11.4104" << endl;
    cout << "Mata Kuliah \t: Dasar Pemrograman" << endl;
    cout << endl;

    cout << "---------------------- No. 1 ----------------------" << endl;
    int i, j;
    for (i = 100, j = 1; i > 0; i--, j++) {
        cout << "i = " << i << "\t j = " << j << endl;
    }
    cout << endl;

    cout << "---------------------- No. 2 ----------------------" << endl;
    int a;
    for (a = 1; a <= 100; a++) {
        if (a % 2 == 1) {
            continue;
        }
        cout << "Nilai genap adalah " << a << endl;
    }
    cout << endl;

    cout << "---------------------- No. 3 ----------------------" << endl;
    int b;
    for (b = 100; b > 0; b--) {
        cout << b << endl;
        if (b == 55) {
            break;
        }
    }
    cout << endl;

    cout << "---------------------- No. 4 ----------------------" << endl;
    int jumlah;
    float rata;
    for (int c = 1; c <= 20; c++) {
        cout << c << endl;
        jumlah = jumlah + c;
        rata = c;
    }
    cout << endl;
    cout << "Jumlah \t\t= " << jumlah << endl;
    cout << "Rata-rata \t= " << jumlah / rata << endl;
    cout << endl;

    cout << "---------------------- No. 5 ----------------------" << endl;
    int d, nilai;
    cout << "Program ini akan berhenti jika anda menginputkan angka -99" << endl;
    cout << endl;

    for (d = 1 ; ; d++) {
        cout << "Masukan nilai anda : ";
        cin >> nilai;
        if (nilai == -99) {
            cout << "\nKeluar karena break" << endl;
            break;
        }
    }
    cout << endl;

    cout << "---------------------- No. 6 ----------------------" << endl;
    int min, max;
    for (d = 1 ; ; d++) {
        cout << "Masukan nilai anda : ";
        cin >> nilai;
        if (nilai == -99) {
            break;
        }

        if(d == 1) {
            min = nilai;
            max = nilai;
        } else {if (nilai > max) {
            max = nilai;
        } if (nilai < min) {
            min = nilai;
        }
        }
    }
    cout << endl;
    cout << "max = " << max << endl;
    cout << "min = " << min << endl;
    cout << endl;

    cout << "---------------------- No. 7 ----------------------" << endl;
    int sum = 0;
    int x;

    cout << "Input bil : ";
    cin >> x;

    while (x != 9999) {
        cout << x << endl;
        sum = sum + x;
        cout << "Input bil : ";
        cin >> x;
    }
    cout << "\nJumlah angka = " << sum << endl;
    cout << endl;

    cout << "---------------------- No. 8 ----------------------" << endl;
    int y = 0;
    int z;

    cout << "Input bil : ";
    cin >> z;

    while (z != 9999) {
        cout << z << endl;
        y = y + 1;

        cout << "Input bil : ";
        cin >> z;
    }
    cout << "\nJumlah angka = " << y << endl;
    cout << endl;

    cout << "---------------------- No. 9 ----------------------" << endl;
    int k = 1;
    int sum2 = 0;
    int l;

    cout << "Input bil : ";
    cin >> l;

    while (l != 9999) {
        cout << l;
        sum2 = sum2 + l;
        k = k + 1;

        cout << "\nInput bil : ";
        cin >> l;
    }
    cout << "\nJumlah angka = " << sum2 << endl;
    cout << "\nJumlah cacah angka = " << k - 1 << endl;
    cout << endl;

    cout << "---------------------- No. 10 ----------------------" << endl;
    int g, h;

    for (g = 1; g <= 10; g++) {
        cout << "Looping yang ke - " << g << endl;
        for (h = 1; h <= 10; h++) {
            cout << "-angka " << h << "-" << endl;
        }
    }
    cout << endl;

    cout << "---------------------- No. 11 ----------------------" << endl;
    int m, n, sum3;

    cout << "Input : ";
    cin >> m;
    for (n = 1; n <= 10; n++) {
        sum3 = m * n;
        cout << n << "x" << m << " = " << sum3 << endl;
    }
    cout << endl;

    cout << "---------------------- No. 12 ----------------------" << endl;

    int e;
    float f;
    cout << endl;
    cout << "-------------------------------------------------" << endl;
    cout << "\tCelcius \t|\tFahrenheit\t|" << endl;
    cout << "-------------------------------------------------" << endl;
    for (e = 0; e <= 100; e++) {
        f = (e * (9/5)) + 32;
        printf("%d \t\t\t|\t\t %0.1f | \n", e, f);
    }
    cout << endl;

    cout << "---------------------- No. 13 ----------------------" << endl;
    cout << endl;
    cout << "---------------------------------------------------------------------------------" << endl;
    cout << "\tCelcius \t|\tFahrenheit\t| \tKeterangan \t\t|" << endl;
    cout << "---------------------------------------------------------------------------------" << endl;
    for(e = 100; e >= -45; e--) {
        f = (e * (9/5)) + 32;
        if(e == 100) {
        printf("%d \t\t\t\t %.1f \t\t Air mendidih \n",e, f);
        } else if(e == 40) {
        printf("%d \t\t\t\t %.1f \t\t Air mandi panas \n",e, f);
        } else if(e == 37) {
        printf("%d \t\t\t\t %.1f \t\t Temperatur tubuh \n",e, f);
        } else if(e == 30) {
        printf("%d \t\t\t\t %.1f \t\t Cuaca pantai\n",e, f);
        } else if(e == 21) {
        printf("%d \t\t\t\t %.1f \t\t Temperatur ruangan \n",e, f);
        } else if(e == 10) {
        printf("%d \t\t\t\t %.1f \t\t Hari yang dingin \n",e, f);
        } else if(e == 0) {
        printf("%d \t\t\t\t %.1f \t\t Titik beku air \n",e, f);
        } else if(e == -18) {
        printf("%d \t\t\t\t %.1f \t\t Cuaca dingin bersalju \n",e, f);
        } else if(e == -40) {
        printf("%d \t\t\t\t %.1f \t\t Cuaca sangat dingin bersalju \n",e, f);
    cout << "---------------------------------------------------------------------------------" << endl;
        }
    }

    return 0;
}
