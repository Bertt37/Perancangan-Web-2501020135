#include <iostream>
using namespace std;

void komputer() {
    const int harga = 14000000;
    int jumlah;
    char ulang;
    do{
        cout << "          Menu Komputer\n";
        cout << "==================================\n";
        cout << "Harga Komputer Rp. " << harga << "/unit\n";
        cout << "Pembelian diatas 5 unit akan mendapatkan diskon 10%\n";
        cout << "Masukkan Jumlah Unit :";
        cin >> jumlah;

        int diskon = (jumlah > 5)? 0.10 * harga * jumlah : 0;
        int total = harga * jumlah - diskon;

        cout << "Diskon = Rp. " << diskon << endl;
        cout << "Total Harga = Rp. " << total << endl;

        cout << "Apakah Ingin Membeli Lagi ? (Y/N) : ";
        cin >> ulang;
    }while (ulang == 'y' || ulang == 'Y');
}
void laptop() {
    const int harga = 10500000;
    int jumlah;
    char ulang;
    do{
        cout << "          Menu Laptop\n";
        cout << "==================================\n";
        cout << "Harga Laptop Rp. " << harga << "/unit\n";
        cout << "Pembelian diatas 5 unit akan mendapatkan diskon 8%\n";
        cout << "Masukkan Jumlah Unit :";
        cin >> jumlah;

        int diskon = (jumlah > 5)? 0.08 * harga * jumlah : 0;
        int total = harga * jumlah - diskon;

        cout << "Diskon = Rp. " << diskon << endl;
        cout << "Total Harga = Rp. " << total << endl;

        cout << "Apakah Ingin Membeli Lagi ? (Y/N) : ";
        cin >> ulang;
    }while (ulang == 'y' || ulang == 'Y');
}
void aksesoris() {
    int pilihan, jumlah;
    int harga=0, diskon=0, total=0;
    char ulang;
    do{
        cout << "         Menu Aksesoris\n";
        cout << "==================================\n";
        cout << "Aksesoris yang tersedia : \n";
        cout << "1. Printer : 1.000.000/unit\n";
        cout << "2. Keyboard : 250.000/unit\n";
        cout << "3. Mouse : 80.000/unit\n";
        cout << "Pembelian diatas 10 unit untuk setiap aksesoris akan mendapatkan diskon 5%\n";
        cout << "==================================\n";
        cout << "Pilih Aksesoris (1-3) : ";
        cin >> pilihan;

        switch (pilihan){
            case 1: harga = 1000000; break;
            case 2: harga = 250000; break;
            case 3: harga = 80000; break;
            default :cout << "Menu tidak tersedia\n";
            return;
        }
        cout << "Masukkan Jumlah Yang Dibeli : ";
        cin >> jumlah;

        diskon = (jumlah > 10)? 0.05 * harga * jumlah : 0;
        total = harga * jumlah - diskon;

        cout << "Diskon = Rp. " << diskon << endl;
        cout << "Total Harga = Rp. " << total << endl;

        cout << "Apakah Ingin Membeli Lagi ? (Y/N) : ";
        cin >> ulang;
    }while (ulang == 'y' || ulang == 'Y');
}
int main() {
    int pilihan;
    do{
        cout << "  Toko Komputer Pinang Sejahtera\n";
        cout << "==================================\n";
        cout << " 1. Komputer\n";
        cout << " 2. Laptop\n";
        cout << " 3. Aksesoris\n";
        cout << " 4. Selesai\n";
        cout << "==================================\n";
        cout << " Pilih menu : ";
        cin >> pilihan;

        switch (pilihan) {
            case 1: komputer(); break;
            case 2: laptop(); break;
            case 3: aksesoris(); break;
            case 4: cout << "Terimakasih Telah Berbelanja!\n"; break;
            default: cout << "Menu Tidak Tersedia\n";
        }
    }while (pilihan != 4);
    return 0;
}