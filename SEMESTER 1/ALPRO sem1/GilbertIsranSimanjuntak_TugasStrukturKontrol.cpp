#include <iostream>
#include <string>
using namespace std;

int main(){
    int pilihan;
    int jumlah_barang;
    double hargaperbarang, totalharga, diskon, hargasetelahdiskon;
    int nilai;
    int jeniskendaraan;
    int jamparkir;
    int tarifperjam;
    int totalbiaya;

    do {
        cout << "Pilih Soal\n";
        cout << "=====================================================================================================\n";
        cout << "1. Sebuah toko elektronik memberikan diskon berdasarkan jumlah barang yang dibeli\n";;
        cout << "2. Sebuah sekolah ingin menentukan apakah siswa lulus ujian\n";
        cout << "3. Seorang kasir ingin mencari barang dalam daftar. Jika barang ditemukan, pencarian dihentikan.\n";
        cout << "4. Sebuah aplikasi parkir menghitung biaya berdasarkan jenis kendaraan\n";
        cout << "5. Selesai\n";
        cout << "=====================================================================================================\n";
        cout << "Masukkan Pilihan :";
        cin >> pilihan;

        if (pilihan == 1){
            cout << "=====================================================================================================\n";
            // input dari pengguna
            cout << "Masukkan Jumlah Barang :";
            cin >> jumlah_barang;
            cout << "Masukkan Harga Per Barang :";
            cin >> hargaperbarang;

            // hitung total harga sebelum diskon
            totalharga = jumlah_barang * hargaperbarang;

            // menentukan diskon berdasarkan jumlah barang
            if (jumlah_barang <=5){
                diskon = 0.0;
            }else if (jumlah_barang <=10){
                diskon = 0.10;
            }else {
                diskon = 0.20;
            }
            // hitung total setelah diskon
            hargasetelahdiskon = totalharga - (totalharga * diskon);
            
            // output
            cout << "Diskon : " << diskon * 100 << "%\n";
            cout << "Total Harga Setelah Diskon : Rp" << hargasetelahdiskon << "\n";
            cout << "=====================================================================================================\n";
        }
        else if (pilihan == 2){
            cout << "=====================================================================================================\n";
            cout << "Masukkan Nilai : ";
            cin >> nilai;
            // menentukan nilai lulus atau tidak
            if (nilai >=60){
                cout << "Lulus\n";
            }
            else {
                cout << "Tidak Lulus\n";
            }
            cout << "=====================================================================================================\n";
        }
        else if (pilihan == 3){
            cout << "=====================================================================================================\n";

            //nama barang
            string namabarang[10] = {
            "roti", "daging","air", "baju","celana","selai","sayur","buah","tas","buku"};

            // cari barang
            string barangdicari;
            bool ditemukan = false;
            
            //input namabarang yang dicari
            cout << "Masukkan barang yang dicari : ";
            cin.ignore(); // ← Tambahkan ini agar getline berfungsi dengan benar
            getline(cin, barangdicari);

            //loop pencarian
            for (int i=0; i < 10; i++){
                if(namabarang[i] == barangdicari) {
                    ditemukan = true;
                    break; //hentikan pencarian ketika barang ditemukan
                }
            }
            //output
            if (ditemukan){
                cout << "Barang \"" << barangdicari << "\" ditemukan dalam daftar\n";
            }else{
                cout << "Barang \"" << barangdicari << "\" tidak ditemukan dalam daftar\n";
            }
            cout << "=====================================================================================================\n";
        }
        else if (pilihan == 4){
            cout << "=====================================================================================================\n";
            // pilih jenis kendaraan
            cout << "1. motor\n";
            cout << "2. mobil\n";
            cout << "3. truk\n";
            cout << "=====================================================================================================\n";
            cout << "Masukkan pilihan : ";
            cin >> jeniskendaraan;

            //input lama parkir
            cout << "Masukkan berapa jam telah parkir : ";
            cin >> jamparkir;

            //menentukan berapa yang harus dibayar berdasarkan jenis kendaraan
            switch (jeniskendaraan){
            case 1:
                tarifperjam = 2000;
                break;
            case 2:
                tarifperjam = 5000;
                break;
            case 3:
                tarifperjam = 10000;
                break;
            default:
                cout << "Jenis Kendaraan Tidak Valid\n";
                return 0;
            }

            //hitung total biaya
            totalbiaya = tarifperjam * jamparkir;

            //output
            cout << "Tarif perJam = Rp" << tarifperjam << "\n";
            cout << "Total Bayar Parkir = Rp" << totalbiaya << "\n";
            cout << "=====================================================================================================\n";
        }
        else if (pilihan == 5){
            cout << "=====================================================================================================\n";
            cout << "Terima Kasih Telah Menggunakan :D";
        }
        else {
            cout << "=====================================================================================================\n";
            cout << "Menu Tidak Tersedia\n";
            cout << "=====================================================================================================\n";
        }
    }
    while  (pilihan != 5);
    return 0;
}