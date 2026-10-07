// //	Buatlah program dengan ketentuan Membuat struct, object, dan method berdasarkan objek pesawat
// #include <iostream>
// using namespace std;

// int main() {
//     struct Pesawat {
//     double panjang;
//     double lebar;
//     double kecepatan;
    
//     void ukuranpesawat() {
//         cout << "Panjang Pesawat: " << panjang << " meter" << endl;
//         cout << "Lebar Pesawat: " << lebar << " meter" << endl;
//     }
    
//     void kecepatanpesawat() {
//         cout << "Kecepatan Pesawat: " << kecepatan << " km/jam" << endl;
//     }
//     };

//     Pesawat pesawat1;
//     pesawat1.panjang = 70.0;
//     pesawat1.lebar = 60.0;
//     pesawat1.kecepatan = 900.0;

//     pesawat1.ukuranpesawat();
//     pesawat1.kecepatanpesawat();

//     return 0;
// }

#include <iostream>
#include <string>
using namespace std;

// Struct Pesawat
struct Pesawat {
    string nama;
    string maskapai;
    int kapasitas;
    int kecepatan; // km/jam

    // Method untuk menampilkan info
    void info() {
        cout << "Pesawat " << nama << " dari maskapai " << maskapai
             << " kapasitas " << kapasitas
             << " penumpang, kecepatan " << kecepatan << " km/jam." << endl;
    }

    // Method untuk menghitung waktu tempuh
    double waktuTempuh(int jarak) {
        return (double)jarak / kecepatan;
    }
};

int main() {
    // Membuat object pesawat
    Pesawat p1 = {"Airbus A320", "Lion Air", 180, 850};

    // Panggil method
    p1.info();

    int jarak = 1700;
        cout << "Waktu tempuh " << jarak << " km = "
             << p1.waktuTempuh(jarak) << " jam." << endl;

    return 0;
}