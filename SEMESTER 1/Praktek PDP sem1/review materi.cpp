// #include <iostream>
// using namespace std;

// int main() {
//     int i = 1;

//     // Looping dengan do...while
//     do {
//         cout << "5 x " << i << " = " << 5 * i << endl;
//         i++;
//     } while (i <= 10);

//     return 0;
// }

// #include <iostream>
// using namespace std;

// // Fungsi untuk menampilkan salam
// void sapa(string nama) {
//     cout << "Halo, " << nama << "!" << endl;
// }

// int main() {
//     // Memanggil fungsi dengan parameter berbeda
//     sapa("Gilbert");
//     sapa("Imsal");
//     sapa("Carlos");
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int angka[8];
//     int genap = 0, ganjil = 0;

//     // Input elemen array
//     cout << "Masukkan 8 angka:" << endl;
//     for (int i = 0; i < 8; i++) {
//         cout << "Angka ke-" << i+1 << ": ";
//         cin >> angka[i];
//     }

//     // Loop untuk menghitung jumlah genap dan ganjil
//     for (int i = 0; i < 8; i++) {
//         if (angka[i] % 2 == 0) {
//             genap++;
//         } else {
//             ganjil++;
//         }
//     }

//     // Output hasil
//     cout << "\nJumlah angka genap: " << genap << endl;
//     cout << "Jumlah angka ganjil: " << ganjil << endl;

//     return 0;
// }

#include <iostream>
#include <string>
using namespace std;

const int MAX = 50;
string kodeRuang[MAX];
string mataKuliahRuang[MAX];
int kapasitasRuang[MAX];
int jumlahRuang[MAX];
int totalRuang = 0;


void tampilkanRuang() {
    cout << "\n===========================================\n";
    cout << "No  Kode   Mata Kuliah        Kapasitas   Jumlah\n";
    cout << "===========================================\n";

    for (int i = 0; i < totalRuang; i++) {
        cout << i + 1 << "   "
             << kodeRuang[i] << "    "
             << mataKuliahRuang[i] << "        "
             << kapasitasRuang[i] << "          "
             << jumlahRuang[i] << endl;
    }
    cout << "===========================================\n";
}


void pinjamRuang() {
    if (totalRuang == 0) {
        cout << "\nData ruang kosong! Isi data dulu.\n";
        return;
    }

    string namaDosen, mk;
    int jumlahMhs;

    cout << "\nNama Dosen         : ";
    cin.ignore();
    getline(cin, namaDosen);

    cout << "Mata Kuliah        : ";
    getline(cin, mk);

    cout << "Jumlah Mahasiswa   : ";
    cin >> jumlahMhs;

    bool ditemukan = false;

    for (int i = 0; i < totalRuang; i++) {
        if (jumlahMhs <= kapasitasRuang[i]) {
            cout << "\nRuang tersedia!\n";
            cout << "Ruang : " << kodeRuang[i] << endl;
            cout << "Kapasitas : " << kapasitasRuang[i] << endl;
            cout << "Dipinjam untuk MK : " << mk << endl;
            cout << "Dosen : " << namaDosen << endl;
            ditemukan = true;
            break;
        }
    }

    if (!ditemukan) {
        cout << "\nTidak ada ruang yang kapasitasnya cukup!\n";
    }
}


void inputRuang() {
    char lanjut = 'y';

    while (lanjut == 'y' || lanjut == 'Y') {
        if (totalRuang >= MAX) {
            cout << "\nData ruang penuh!\n";
            return;
        }

        cout << "\nInput ruang ke-" << totalRuang + 1 << endl;

        cout << "Kode Ruang         : ";
        cin >> kodeRuang[totalRuang];

        cout << "Mata Kuliah        : ";
        cin.ignore();
        getline(cin, mataKuliahRuang[totalRuang]);

        cout << "Kapasitas Ruang    : ";
        cin >> kapasitasRuang[totalRuang];

        cout << "Jumlah Kelas       : ";
        cin >> jumlahRuang[totalRuang];

        totalRuang++;

        
        if (totalRuang == 5) {
            cout << "\nAnda sudah menginput 5 ruang.\n";
            tampilkanRuang();
        }

        cout << "\nInput data ruang lagi? (y/n): ";
        cin >> lanjut;
    }

    
    char pinjam;
    cout << "\nApakah Anda ingin meminjam ruang kelas? (y/n): ";
    cin >> pinjam;

    if (pinjam == 'y' || pinjam == 'Y') {
        pinjamRuang();
    }
}


int menu() {
    int pilih;
    cout << "\n===== MENU UTAMA =====\n";
    cout << "1. Input Data Ruang Kelas\n";
    cout << "2. Peminjaman Ruang Kelas\n";
    cout << "3. Exit\n";
    cout << "Pilih menu: ";
    cin >> pilih;
    return pilih;
}

int main() {
    int pilih;

    do {
        pilih = menu();
        switch (pilih) {
            case 1:
                inputRuang();
                break;
            case 2:
                pinjamRuang();
                break;
            case 3:
                cout << "\nProgram selesai.\n";
                break;
            default:
                cout << "\nPilihan tidak valid!\n";
        }
    } while (pilih != 3);

    return 0;
}