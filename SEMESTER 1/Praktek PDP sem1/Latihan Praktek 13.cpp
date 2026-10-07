// Nomor 1
#include <iostream>
#include <string>
using namespace std;

int main() {
    string negara[10] = {
        "Arab", "Belanda", "China", "Denmark", "Ethiopia",
        "Filipina", "Greenland", "Hungaria", "Inggris", "Jepang"
    };

    int indeks;
    cout << "Masukkan indeks (2, 5, 7, atau 9): ";
    cin >> indeks;

    // Validasi indeks
    if (indeks == 2 || indeks == 5 || indeks == 7 || indeks == 9) {
        cout << "Negara pada indeks " << indeks << ": " << negara[indeks] << endl;
    } else {
        cout << "Indeks tidak valid. Harus 2, 5, 7, atau 9." << endl;
    }

    // 3. Tampilkan semua list nama negara dengan looping
    cout << "\nDaftar semua negara:\n";
    for (int i = 0; i < 10; i++) {
        cout << i << ". " << negara[i] << endl;
    }

    return 0;
}

// Nomor 2
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int baris, kolom;
    cout << "Penjumlahan Matriks\n";
    cout << "=====================\n";
    cout << "Input jumlah baris: ";
    cin >> baris;
    cout << "Input jumlah kolom: ";
    cin >> kolom;

    vector<vector<int>> matriks(baris, vector<int>(kolom));
    int total = 0;

    cout << "Masukkan elemen-elemen matriks:\n";
    for (int i = 0; i < baris; ++i) {
        for (int j = 0; j < kolom; ++j) {
            cout << "Elemen [" << i << "][" << j << "]: ";
            cin >> matriks[i][j];
            total += matriks[i][j];
        }
    }

    cout << "=====================\n";
    cout << "Total elemen matriks = " << total << endl;

    return 0;
}