#include <iostream>
#include <cstring>
using namespace std;

const int MAX_BUKU = 6;
const int MAX_PINJAM = 100;

// Data Buku (sudah otomatis terisi)
char kodeBuku[MAX_BUKU][10] = {
    "PW01", "MD02", "PM03", "PD04", "U05", "GA06"
};

char namaBuku[MAX_BUKU][50] = {
    "Pemrograman Web",
    "Matematika Diskrit",
    "Pemrograman Mobile",
    "Pemrograman Dasar",
    "UX/UI",
    "Generative AI"
};

int jumlahBuku[MAX_BUKU] = {5, 3, 2, 4, 5, 3};

// Data peminjaman
char namaPeminjam[MAX_PINJAM][30];
char kodePinjam[MAX_PINJAM][10];
int jumlahPinjam[MAX_PINJAM];
int totalPeminjaman = 0;


// ==================== FUNGSI ====================

// mencari indeks buku berdasarkan kode
int cariBuku(char kode[]) {
    for (int i = 0; i < MAX_BUKU; i++) {
        if (strcmp(kodeBuku[i], kode) == 0) {
            return i;
        }
    }
    return -1; // tidak ditemukan
}

// menampilkan daftar buku
void tampilBuku() {
    cout << "\n===== DATA BUKU =====\n";
    cout << "Kode\tNama Buku\t\t\tJumlah\n";
    for (int i = 0; i < MAX_BUKU; i++) {
        cout << kodeBuku[i] << "\t" 
             << namaBuku[i] << "\t\t" 
             << jumlahBuku[i] << endl;
    }
}

// menampilkan riwayat peminjaman
void tampilPeminjaman() {
    cout << "\n===== DATA PEMINJAMAN =====\n";
    for (int i = 0; i < totalPeminjaman; i++) {
        int index = cariBuku(kodePinjam[i]);

        cout << "Nama : " << namaPeminjam[i] << endl;
        cout << "Kode Buku : " << kodePinjam[i] << endl;
        
        if (index != -1) {
            cout << "Nama Buku : " << namaBuku[index] << endl;
            cout << "Jumlah Pinjam : " << jumlahPinjam[i] << endl;
            cout << "Sisa Buku : " << jumlahBuku[index] << "\n\n";
        } 
        else {
            cout << "Buku tidak ditemukan!\n\n";
        }
    }
}

// proses peminjaman
void peminjaman() {

    tampilBuku(); // tampilkan buku dulu

    char lanjut = 'Y';

    while (lanjut == 'Y' || lanjut == 'y') {

        cout << "\nNama Peminjam: ";
        cin.ignore();
        cin.getline(namaPeminjam[totalPeminjaman], 30);

        cout << "Kode Buku: ";
        cin >> kodePinjam[totalPeminjaman];

        int index = cariBuku(kodePinjam[totalPeminjaman]);

        if (index == -1) {
            cout << "Kode buku tidak ditemukan!\n";
            continue;
        }

        cout << "Jumlah Pinjam: ";
        cin >> jumlahPinjam[totalPeminjaman];

        // kurangi jumlah buku
        if (jumlahPinjam[totalPeminjaman] <= jumlahBuku[index]) {
            jumlahBuku[index] -= jumlahPinjam[totalPeminjaman];
            totalPeminjaman++;
            cout << "Peminjaman berhasil!\n";
        } 
        else {
            cout << "Jumlah buku tidak mencukupi!\n";
        }

        cout << "\nPinjam lagi? (Y/N): ";
        cin >> lanjut;
    }

    tampilPeminjaman();
}


// ==================== PROGRAM UTAMA ====================

int main() {

    int pilihan;
    bool jalan = true;

    while (jalan) {
        cout << "\n===== MENU =====\n";
        cout << "1. Lihat Data Buku\n";
        cout << "2. Peminjaman Buku\n";
        cout << "3. Exit\n";
        cout << "Pilih: ";
        cin >> pilihan;

        if (pilihan == 1) {
            tampilBuku();
        }
        else if (pilihan == 2) {
            peminjaman();
        }
        else if (pilihan == 3) {
            cout << "Keluar...\n";
            jalan = false;
        }
        else {
            cout << "Pilihan tidak valid!\n";
        }
    }

    return 0;
}