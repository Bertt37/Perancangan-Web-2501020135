#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Buku {
public:
    string kode_buku;
    string judul;
    string pengarang;
    string penerbit;
    int tahun_terbit;

    void simpan() {
        ofstream file("daftar_buku.txt", ios::app);
        if(file.is_open()) {
            file << kode_buku << "|" 
                 << judul << "|" 
                 << pengarang << "|" 
                 << penerbit << "|" 
                 << tahun_terbit << endl;
            file.close();
            cout << "Data buku berhasil disimpan!" << endl;
        } else {
            cout << "Gagal membuka file!" << endl;
        }
    }

    void tampilkan() {
        ifstream file("daftar_buku.txt");
        string baris;
        cout << "\n=== Daftar Buku ===" << endl;
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
    Buku b1, b2, b3;

    b1.kode_buku = "BK001";
    b1.judul = "Pemrograman Berorientasi Objek";
    b1.pengarang = "Marisha Pertiwi";
    b1.penerbit = "UMRAH Press";
    b1.tahun_terbit = 2025;
    b1.simpan();

    b2.kode_buku = "BK002";
    b2.judul = "Algoritma dan Struktur Data";
    b2.pengarang = "Ahmad Fauzi";
    b2.penerbit = "Informatika";
    b2.tahun_terbit = 2024;
    b2.simpan();

    b3.kode_buku = "BK003";
    b3.judul = "Sistem Basis Data";
    b3.pengarang = "Rina Sari";
    b3.penerbit = "Teknologi Maritim";
    b3.tahun_terbit = 2023;
    b3.simpan();

    Buku tampil;
    tampil.tampilkan();

    return 0;
}