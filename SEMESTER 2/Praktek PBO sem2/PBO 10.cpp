#include <iostream>
#include <string>
using namespace std;

class Proyek {
public:
    string namaProyek;
    string lokasi;

    void inputProyek() {
        cout << "Masukkan Nama Proyek : ";
        getline(cin, namaProyek);
        cout << "Masukkan Lokasi      : ";
        getline(cin, lokasi);
    }

    void tampilProyek() {
        cout << "Nama Proyek : " << namaProyek << endl;
        cout << "Lokasi      : " << lokasi << endl;
    }
};

class Apartemen : public Proyek {
public:
    int jumlahUnit;
    int hargaPerUnit;

    void inputApartemen() {
        inputProyek(); 
        cout << "Masukkan Jumlah Unit : ";
        cin >> jumlahUnit;
        cout << "Masukkan Harga/Unit  : Rp ";
        cin >> hargaPerUnit;
    }

    void tampilApartemen() {
        tampilProyek(); 
        cout << "Jumlah Unit : " << jumlahUnit << endl;
        cout << "Harga/Unit  : Rp " << hargaPerUnit << endl;
        cout << "Total Nilai Proyek : Rp " << jumlahUnit * hargaPerUnit << endl;
    }
};

int main() {
    Apartemen apt;
    cout << "=== Input Data Apartemen ===\n";
    apt.inputApartemen();

    cout << "\n=== Data Proyek Apartemen ===\n";
    apt.tampilApartemen();

    return 0;
}