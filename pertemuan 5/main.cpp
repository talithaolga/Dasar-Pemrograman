#include <iostream>

using namespace std;

int main()
{
    cout << "Nama \t\t: Talitha Olga Ramadhani" << endl;
    cout << "NIM \t\t: A11.2022.14110" << endl;
    cout << "Kelompok \t: A11.4104" << endl;
    cout << "Mata Kuliah \t: Dasar Pemrograman" << endl;
    cout << "-------------------------------------------------------------------------" << endl;

    const float phi = 3.14 ;
    float r, L;
    float LP, p, l;

    cout << "Menghitung luas lingkaran" << endl;
    cout << "Masukkan jari-jari = ";
    cin >> r;
    L = phi * r * r;
    cout << "\n";

    cout << "Diketahui lingkaran dengan: " << endl;
    cout << "phi \t\t= " << phi << "\n";
    cout << "jari-jari \t= " << r << " cm" << "\n";

    cout << "\nLuas lingkaran dengan jari-jari " << r << " cm adalah " << L << " cm2" ;
    cout << "\n";

    cout << "-------------------------------------------------------------------------" << endl;
    cout << "Menghitung luas persegi panjang" << endl;
    cout << "Masukkan panjang = ";
    cin >> p ;

    cout << "Masukkan lebar = ";
    cin >> l;
    LP = p * l;
    cout << "\n";

    cout << "Diketahui persegi panjang dengan: " << endl;
    cout << "panjang = " << p <<" cm" <<"\n";
    cout << "lebar \t= " << l << " cm" << "\n";

    cout << "\nLuas persegi panjang dengan panjang " << p << " cm" << " dan lebar " << l << " cm" << " adalah " << LP << " cm2";
    cout << "\n";
    cout << "-------------------------------------------------------------------------" << endl;

    return 0;
}
