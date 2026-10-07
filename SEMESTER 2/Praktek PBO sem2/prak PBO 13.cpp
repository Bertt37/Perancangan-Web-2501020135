// #include <iostream>
// using namespace std;

// int main() {
//     double a, b;
//     int pilihan;

//     try {
//         cout << "=== KALKULATOR SEDERHANA ===" << endl;
//         cout << "1. Tambah" << endl;
//         cout << "2. Kurang" << endl;
//         cout << "3. Kali" << endl;
//         cout << "4. Bagi" << endl;
//         cout << "5. Modulus" << endl;
//         cout << "Pilih operasi : ";
//         cin >> pilihan;

//         cout << "Masukkan angka pertama : ";
//         cin >> a;
//         cout << "Masukkan angka kedua : ";
//         cin >> b;

//         switch (pilihan) {
//             case 1:
//                 cout << "Hasil = " << a + b << endl;
//                 break;

//             case 2:
//                 cout << "Hasil = " << a - b << endl;
//                 break;

//             case 3:
//                 cout << "Hasil = " << a * b << endl;
//                 break;

//             case 4:
//                 if (b == 0)
//                     throw "Error: Tidak dapat membagi dengan nol!";
//                 cout << "Hasil = " << a / b << endl;
//                 break;

//             case 5:
//                 if ((int)b == 0)
//                     throw "Error: Modulus dengan nol tidak diperbolehkan!";
//                 cout << "Hasil = " << (int)a % (int)b << endl;
//                 break;

//             default:
//                 throw "Pilihan operasi tidak valid!";
//         }
//     }
//     catch (const char* pesan) {
//         cout << pesan << endl;
//     }
//     return 0;
// }

#include <iostream>
using namespace std;

int main() {
    int saldo = 1000000;
    int tarik;

    try {
        cout << "=== SISTEM ATM ===" << endl;
        cout << "Saldo Awal : Rp " << saldo << endl;

        cout << "Masukkan jumlah penarikan : Rp ";
        cin >> tarik;

        if (tarik <= 0)
            throw "Jumlah penarikan harus lebih dari 0!";

        if (tarik > saldo)
            throw "Saldo tidak cukup untuk melakukan transaksi!";

        saldo -= tarik;

        cout << "\nPenarikan berhasil." << endl;
        cout << "Sisa saldo : Rp " << saldo << endl;
    }
    catch (const char* pesan) {
        cout << "\nException: " << pesan << endl;
    }
    return 0;
}