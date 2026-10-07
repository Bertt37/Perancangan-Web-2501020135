#include <iostream>
#include <string>
using namespace std;

class Proyek {
private:
    string namaProyek, penyelenggara, targetProyek;
    int tahunProyek, jumlah;
    float biayaProyek;

public:
    void setData(string n, string p, string t, int th, int j, float b) {
        namaProyek = n;
        penyelenggara = p;
        targetProyek = t;
        tahunProyek = th;
        jumlah = j;
        biayaProyek = b;
    }

    void tampilkanData() {
        cout << "=== Data Proyek ===\n";
        cout << "Nama Proyek    : " << namaProyek << endl;
        cout << "Penyelenggara  : " << penyelenggara << endl;
        cout << "Target Proyek  : " << targetProyek << endl;
        cout << "Tahun Proyek   : " << tahunProyek << endl;
        cout << "Jumlah         : " << jumlah << endl;
        cout << "Biaya Proyek   : Rp" << biayaProyek << endl;
        cout << "===================\n";
    }
};

int main() {
    Proyek p;

    p.setData("Pembangunan Sistem Informasi Kampus",
              "Universitas Maritim Raja Ali Haji",
              "Mahasiswa dan Dosen",
              2026, 5, 25000000);

    p.tampilkanData();

    return 0;
}
