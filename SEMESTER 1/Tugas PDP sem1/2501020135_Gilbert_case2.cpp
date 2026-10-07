// Case 2

#include <iostream>
using namespace std;

int main() {
    int pilihan;
    float sisi;
    do {
        cout << "Menghitung Luas, Keliling, dan Volume Kubus\n";
        cout << "============================================\n";
        cout << "1. Luas Kubus\n";
        cout << "2. Keliling Kubus\n";
        cout << "3. Volume Kubus\n";
        cout << "4. Selesai\n";
        cout << "============================================\n";
        cout << "Pilih Menu :";
        cin >> pilihan;

        if (pilihan == 1){
            cout << "============================================\n";
            cout << "Menu Luas\n";
            cout << "Inputan = ";
            cin >> sisi;
            float luas = 6*sisi*sisi;
            cout << "Hasil Hitung = " << luas << endl;
        }
        else if (pilihan == 2){
            cout << "============================================\n";
            cout << "Menu Keliling\n";
            cout << "Inputan = ";
            cin >> sisi;
            float keliling = 12*sisi;
            cout << "Hasil Hitung = " << keliling << endl;
        }
        else if (pilihan == 3){
            cout << "============================================\n";
            cout << "Menu Volume\n";
            cout << "Inputan = ";
            cin >> sisi;
            float volume = sisi*sisi*sisi;
            cout << "Hasil Hitung = " << volume << endl;
        }
        else if (pilihan == 4){
            cout << "TERIMAKASIH TELAH MENGGUNAKAN PROGRAM INI\n";
        }
        else {
            cout << "============================================\n";
            cout << "Menu Tidak Tersedia\n";
        }
    } while (pilihan != 4);
    return 0;
}