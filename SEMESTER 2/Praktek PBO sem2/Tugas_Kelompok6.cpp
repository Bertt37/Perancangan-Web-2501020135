#include <iostream>
#include <string>
using namespace std;

class Kendaraan {
public:
    string jenis;
    int lamaParkir;

    void inputKendaraan() {
        cout << "Masukkan jenis kendaraan (Mobil/Motor): ";
        cin >> jenis;
        cout << "Masukkan lama parkir (jam): ";
        cin >> lamaParkir;
    }
};

class Parkir : public Kendaraan {
protected:
    int tarifMobil;
    int tarifMotor;

public:
    Parkir(int tarifMobil, int tarifMotor) {
        this->tarifMobil = tarifMobil;
        this->tarifMotor = tarifMotor;
    }

    int hitungBayar() {
        if (jenis == "Mobil" || jenis == "mobil") {
            return lamaParkir * tarifMobil;
        } else if (jenis == "Motor" || jenis == "motor") {
            return lamaParkir * tarifMotor;
        } else {
            return 0;
        }
    }

    int hitungBayar(int diskon) {
        int total = hitungBayar();
        return total - diskon;
    }

    void tampilTarif() {
        cout << "Tarif Mobil : Rp " << tarifMobil << " per jam" << endl;
        cout << "Tarif Motor : Rp " << tarifMotor << " per jam" << endl;
    }
};

class Diskon {
public:
    int hitungDiskon(int total) {
        if (total >= 20000) {
            return total * 0.1;
        }
        return 0;
    }
};

class Pembayaran : public Parkir, public Diskon {
public:
    Pembayaran(int tarifMobil, int tarifMotor) : Parkir(tarifMobil, tarifMotor) {}

    void prosesBayar() {
        int total = hitungBayar();
        int potongan = hitungDiskon(total);
        int totalBayar = hitungBayar(potongan);

        cout << "Nominal yang harus dibayar : Rp " << total << endl;
        if (potongan > 0) {
            cout << "Diskon diberikan           : Rp " << potongan << endl;
            cout << "Total setelah diskon       : Rp " << totalBayar << endl;
        }

        int uangBayar;
        cout << "Masukkan Uang Bayar: Rp ";
        cin >> uangBayar;

        cout << "Uang Dibayar               : Rp " << uangBayar << endl;

        if (uangBayar < totalBayar) {
            cout << "Maaf, uang anda kurang Rp " << totalBayar - uangBayar << endl;
        } else if (uangBayar == totalBayar) {
            cout << "Uang pas, tidak ada kembalian.\n";
            cout << "Transaksi berhasil. Terima kasih!\n";
        } else {
            cout << "Kembalian                  : Rp " << uangBayar - totalBayar << endl;
            cout << "Transaksi berhasil. Terima kasih!\n";
        }
    }
};

int main() {
    Pembayaran bayar(5000, 2000);

    cout << "=== Sistem Pembayaran Parkir dengan Polimorfisme ===\n";
    bayar.tampilTarif();
    bayar.inputKendaraan();
    bayar.prosesBayar();

    return 0;
}