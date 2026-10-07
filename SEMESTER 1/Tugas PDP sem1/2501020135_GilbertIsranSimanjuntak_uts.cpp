#include <iostream>
#include <string>
using namespace std;

class Produk{
private:
    string idproduk;
    string namaproduk;
    string kategori;
    string deskripsi;
    int stok;
    int harga;
    int diskon;
    string owner;

public:
    Produk(){
        cout << "=== Program Penjualan Komputer dan laptop di toko maju komputer===" << endl;
    }

    void inputdata(){
        cout << "==== INPUT DATA PRODUK ===="<< endl;

        cout << "ID Produk : ";
        getline(cin, idproduk);

        cout << "Nama Produk : ";
        getline(cin, namaproduk);

        cout << "Kategori (Komputer/Laptop) : ";
        getline(cin, kategori);

        cout << "Deskripsi : ";
        getline(cin, deskripsi);

        cout << "Stok : ";
        cin >> stok;

        cout << "Harga : ";
        cin >> harga;

        cout << "Diskon(%): ";
        cin >> diskon;
        cin.ignore();

        cout << "Owner : ";
        getline(cin, owner);
    }

    void tampilandata(){
        int hargaakhir = harga - (harga * diskon /100);

        cout << "==== Output Data ====" << endl;

        cout << "ID Produk : " << idproduk << endl;
        cout << "Nama Produk : " << namaproduk << endl;
        cout << "Kategori : " << kategori << endl;
        cout << "Deskripsi : " << deskripsi << endl;
        cout << "Stok : " << stok << endl;
        cout << "Harga : Rp " << harga << endl;
        cout << "Diskon : " << diskon << "%" << endl;
        cout << "Total Harga : Rp" << hargaakhir << endl;
        cout << "Owner : " << owner << endl;
    }

    ~Produk(){
        cout << "\n==== Program Selesai ====" << endl;
    }
};

int main(){
    Produk produk;

    produk.inputdata();
    produk.tampilandata();

    return 0;
}
