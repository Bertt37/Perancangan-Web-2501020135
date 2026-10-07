// nomor 1
#include <iostream>
using namespace std;

int main() {
    int usia;

    cout << "Masukkan  Usia Anda : ";
    cin >> usia;

    if (usia <5)
    cout << "Balita" << endl;
    else if (usia <12)
    cout << "Anak - Anak" << endl;
    else if (usia <18)
    cout << "Remaja" << endl;
    else if (usia <45)
    cout << "Dewasa" << endl;
    else if (usia <65)
    cout << "Lansia " << endl;
    else if (usia <100)
    cout << "Manula" << endl;
    return 0;
}


// Nomor 2
// #include <iostream>
// using namespace std;

// int main() {
//     int angka;

//     cout << "Masukkan angka : ";
//     cin >> angka;

//     if (angka >0)
//     cout << "Nilai diatas nol" << endl;
//     else if (angka <0)
//     cout << "Nilai adalah = " << angka << endl;
//     return 0;
// }

// Nomor 3
// #include <iostream>
// using namespace std;

// int main() {
//     int usia;

//     cout << "Masukkan Usia Anda : ";
//     cin >> usia;

//     if (usia >=23 && usia <=28)
//     cout << "Sudah bekerja" << endl;
//     else if (usia >=18 && usia <=22)
//     cout << "Mahasiswa" << endl;
//     else
//     cout << "Pelajar" << endl;
//     return 0;
// }

// Nomor 4
// #include <iostream>
// using namespace std;

// int main() {
//     int angka;

//     cout << "Masukkan Angka : ";
//     cin >> angka;

//     if (angka % 2 == 0)
//     cout << "Bilangan Genap" << endl;
//     else
//     cout << "Bilangan Ganjil" << endl;
//     return 0;
// }

// Nomor 5
// #include <iostream>
// using namespace std;

// int main() {
//     int hari;

//     cout << "Hari Ke : ";
//     cin >> hari;

//     switch (hari)
//     {
//     case 1:
//         cout << "Senin" <<endl;
//         break;
//     case 2:
//         cout << "Selasa" <<endl;
//         break;
//     case 3:
//         cout << "Rabu" <<endl;
//         break;
//     case 4:
//         cout << "Kamis" <<endl;
//         break;
//     case 5:
//         cout << "Jumat" <<endl;
//         break;
//     case 6:
//         cout << "Sabtu" <<endl;
//         break;
//     default:
//         cout << "Minggu" <<endl;
//         break;
//     }
//     return 0;
// }