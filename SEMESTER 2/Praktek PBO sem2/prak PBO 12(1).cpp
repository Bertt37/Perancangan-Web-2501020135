// #include <iostream>
// #include <fstream>
// #include <string>
// using namespace std;

// class Mahasiswa {
// public:
//     string nama;
//     string nim;
//     string prodi;
//     float ipk;
//     string fakultas;

//     void inputData() {
//         cout << "\n=== Input Data Mahasiswa ===" << endl;
//         cout << "Nama       : "; getline(cin, nama);
//         cout << "NIM        : "; getline(cin, nim);
//         cout << "Prodi      : "; getline(cin, prodi);
//         cout << "IPK        : "; cin >> ipk;
//         cin.ignore();
//         cout << "Fakultas   : "; getline(cin, fakultas);
//     }

//     void simpan() {
//         ofstream file("data_mahasiswa.txt", ios::app);
//         if(file.is_open()) {
//             file << nama << "|" << nim << "|" << prodi 
//                  << "|" << ipk << "|" << fakultas << endl;
//             file.close();
//             cout << "Data mahasiswa berhasil disimpan!" << endl;
//         } else {
//             cout << "Gagal membuka file!" << endl;
//         }
//     }

//     void tampilkan() {
//         ifstream file("data_mahasiswa.txt");
//         string baris;
//         cout << "\n=== Data Mahasiswa ===" << endl;
//         if(file.is_open()) {
//             while(getline(file, baris)) {
//                 cout << baris << endl;
//             }
//             file.close();
//         } else {
//             cout << "File tidak ditemukan!" << endl;
//         }
//     }
// };

// int main() {
//     int jumlah;
//     cout << "Berapa jumlah mahasiswa yang ingin diinput?: ";
//     cin >> jumlah;
//     cin.ignore();

//     for(int i = 0; i < jumlah; i++) {
//         Mahasiswa m;
//         m.inputData();
//         m.simpan();
//     }

//     Mahasiswa tampil;
//     tampil.tampilkan();

//     return 0;
// }

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Pegawai {
public:
    string nama;
    string nip;
    string jabatan;
    string divisi;
    void inputData() {
        cout << "\n=== Input Data Pegawai ===" << endl;
        cout << "Nama     : "; getline(cin, nama);
        cout << "NIP      : "; getline(cin, nip);
        cout << "Jabatan  : "; getline(cin, jabatan);
        cout << "Divisi   : "; getline(cin, divisi);
    }
    void simpan() {
        ofstream file("data_pegawai.txt", ios::app);
        if(file.is_open()) {
            file << nama << "|" << nip << "|" << jabatan 
                 << "|" << divisi << endl;
            file.close();
            cout << "Data pegawai berhasil disimpan!" << endl;
        } else {
            cout << "Gagal membuka file!" << endl;
        }
    }
    void tampilkan() {
        ifstream file("data_pegawai.txt");
        string baris;
        cout << "\n=== Data Pegawai ===" << endl;
        if(file.is_open()) {
            while(getline(file, baris)) {
                cout << baris << endl;
            }
            file.close();
        } else {
            cout << "File tidak ditemukan!" << endl;
        }
    }
};
int main() {
    int jumlah;
    cout << "Berapa jumlah pegawai yang ingin diinput?: ";
    cin >> jumlah;
    cin.ignore();

    for(int i = 0; i < jumlah; i++) {
        Pegawai p;
        p.inputData();
        p.simpan();
    }

    Pegawai tampil;
    tampil.tampilkan();

    return 0;
}