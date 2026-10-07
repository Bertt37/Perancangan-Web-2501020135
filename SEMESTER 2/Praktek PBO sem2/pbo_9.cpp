// #include <iostream>
// using namespace std;

// class Proyek {
// private:
//     string namaProyek, penyelenggara, targetProyek;
//     int tahunProyek, jumlah;
//     float biayaProyek;

// public:
//     // Setter
//     void setData(string np, string py, string tp, int th, int jml, float biaya) {
//         namaProyek = np;
//         penyelenggara = py;
//         targetProyek = tp;
//         tahunProyek = th;
//         jumlah = jml;
//         biayaProyek = biaya;
//     }

//     // Getter
//     string getNamaProyek() const { return namaProyek; }
//     string getPenyelenggara() const { return penyelenggara; }
//     string getTargetProyek() const { return targetProyek; }
//     int getTahunProyek() const { return tahunProyek; }
//     int getJumlah() const { return jumlah; }
//     float getBiayaProyek() const { return biayaProyek; }

//     // Method tampil data
//     void tampilData() {
//         cout << "Nama Proyek      : " << namaProyek << endl;
//         cout << "Penyelenggara    : " << penyelenggara << endl;
//         cout << "Target Proyek    : " << targetProyek << endl;
//         cout << "Tahun Proyek     : " << tahunProyek << endl;
//         cout << "Jumlah           : " << jumlah << endl;
//         cout << "Biaya Proyek     : " << biayaProyek << endl;
//     }
// };

// int main() {
//     Proyek p;

//     // Mengisi data
//     p.setData("Pembangunan Pelabuhan", "Kementerian Perhubungan", "2026",
//               2026, 5, 1500000000);

//     // Menampilkan data
//     p.tampilData();

//     return 0;
// }

#include <iostream>
using namespace std;

// Membuat class Tabungan
class Tabungan {
private:
    string nama;
    int saldo;

public:
    // Constructor
    Tabungan(string n, int s) {
        nama = n;
        saldo = s;
    }

    // Method untuk menampilkan data
    void tampilkan() {
        cout << "Nama Nasabah : " << nama << endl;
        cout << "Saldo        : Rp " << saldo << endl;
    }

    // Method untuk menabung
    void menabung(int jumlah) {
        saldo += jumlah;
        cout << "Berhasil menabung Rp " << jumlah << endl;
    }

    // Method untuk menarik uang
    void tarik(int jumlah) {
        if (jumlah > saldo) {
            cout << "Saldo tidak cukup!" << endl;
        } else {
            saldo -= jumlah;
            cout << "Berhasil menarik Rp " << jumlah << endl;
        }
    }
};

// Program utama
int main() {
    string nama;
    int saldoAwal, pilihan, jumlah;

    cout << "=== SISTEM TABUNGAN SEDERHANA ===" << endl;
    cout << "Masukkan nama nasabah: ";
    cin >> nama;
    cout << "Masukkan saldo awal: ";
    cin >> saldoAwal;

    // Membuat object
    Tabungan nasabah(nama, saldoAwal);

    do {
        cout << "\nMenu:" << endl;
        cout << "1. Lihat Saldo" << endl;
        cout << "2. Menabung" << endl;
        cout << "3. Tarik Uang" << endl;
        cout << "4. Keluar" << endl;
        cout << "Pilih: ";
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                nasabah.tampilkan();
                break;
            case 2:
                cout << "Masukkan jumlah tabungan: ";
                cin >> jumlah;
                nasabah.menabung(jumlah);
                break;
            case 3:
                cout << "Masukkan jumlah penarikan: ";
                cin >> jumlah;
                nasabah.tarik(jumlah);
                break;
            case 4:
                cout << "Terima kasih!" << endl;
                break;
            default:
                cout << "Pilihan tidak valid!" << endl;
        }

    } while (pilihan != 4);

    return 0;
}

