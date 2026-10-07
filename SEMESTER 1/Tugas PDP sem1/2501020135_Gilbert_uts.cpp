#include <iostream>
using namespace std;

int main() {
    int unit;
    int pilihan;
    int pajak_pembelian;
    int potongan_harga;
    int total_bayar;
    int harga = 7000000;
    int harga_po = 6500000;
    int total_beli;

    do {
        cout << "        Pembelian Unit Komputer\n";
        cout << "        Harga = Rp7.000.000/unit\n";
        cout << "=========================================\n";
        cout << " 1. Membeli Kurang Dari 3 Unit komputer\n";
        cout << " 2. Membeli 3 - 10 Unit Komputer\n";
        cout << " 3. membeli Lebih Dari 10 Unit Komputer\n";
        cout << " 4. Selesai\n";
        cout << "=========================================\n";
        cout << "Pilih menu : ";
        cin >> pilihan;

        if (pilihan == 1){
            cout << "=========================================\n";
            cout << "Masukkan Jumlah unit : ";
            cin >> unit;
            if (unit <3){
                total_bayar = unit * harga;
                cout << "Jumlah yang dibeli = " << unit <<"\n";
                cout << "Total Harga = Rp" << total_bayar << "\n";
                cout << "Anda Tidak Mendapatkan Diskon\n";
                cout << "=========================================\n";
            }else {
                cout << "=========================================\n";
                cout << "Pilih Menu Lain\n";
                cout << "=========================================\n";
            }
        }
        else if (pilihan == 2){
            cout << "=========================================\n";
            cout << "Masukkan Jumlah Unit : ";
            cin >> unit;
            if (unit >3 && unit <10){
                total_beli = unit * harga;
                potongan_harga = total_beli* 0.1;
                pajak_pembelian = total_beli* 0.1;
                total_bayar = total_beli - potongan_harga + pajak_pembelian;
                cout << "Jumlah yang dibeli = " << unit << "\n";
                cout << "Diskon = Rp" << potongan_harga << "\n";
                cout << "Pajak = Rp" << pajak_pembelian << "\n";
                cout << "Total Bayar = Rp" << total_bayar << "\n";
                cout << "=========================================\n";
            }else {
                cout << "=========================================\n";
                cout << "Pilih Menu Yang lain\n";
                cout << "=========================================\n";
            }
        }
        else if (pilihan == 3){
            cout << "=========================================\n";
            cout << "Masukkan Jumlah Unit : ";
            cin >> unit;
            if (unit >10 && unit <12){
                total_beli = unit * harga;
                potongan_harga = total_beli*(15/100);
                pajak_pembelian = total_beli*(15/100);
                total_bayar = total_beli - potongan_harga + pajak_pembelian;
                cout << "Jumlah yang dibeli = " << unit << "\n";
                cout << "Diskon = Rp" << potongan_harga << "\n";
                cout << "Pajak = Rp" << pajak_pembelian << "\n";
                cout << "Total Bayar = Rp" << total_bayar << "\n";
                cout << "=========================================\n";
            }else if (unit >12){
                cout << "=========================================\n";
                cout << "Stok Tidak Cukup dan Harus Pre-order (PO)\n";
                cout << "Pre-order minimal 20 unit\n";
                cout << "Masukkan Jumlah yang Akan di PO : ";
                cin >> unit;
                if (unit >20){
                    total_beli = unit * harga_po;
                    pajak_pembelian = total_beli * 0.15;
                    total_bayar = total_beli + pajak_pembelian;
                    cout << "Anda Mendapat Harga/unit = Rp" << harga_po << "\n";
                    cout << "Total yang dibeli = Rp" << total_beli << "\n";
                    cout << "Pajak = RP" << pajak_pembelian << "\n";
                    cout << "Total Bayar = Rp" << total_bayar << "\n";
                    cout << "=========================================\n";
                }
                else {
                    cout << "=========================================\n";
                    cout << "Tidak Dapat Melakukan Pre-order\n";
                    cout << "Jumlah Tidak Memenuhi Minimal PO\n";
                    cout << "=========================================\n";
                }
            }
            else {
                cout << "=========================================\n";
                cout << "Pilih Menu Lain\n";
                cout << "=========================================\n";
            }
        }
        else if (pilihan == 4){
            cout << "=========================================\n";
            cout << "Terimakasih Sudah Membeli :D\n";
        }
        else{
            cout << "=========================================\n";
            cout << "Menu Tidak Tersedia\n";
            cout << "=========================================\n";
        }
    } while (pilihan != 4);
    return 0;
}