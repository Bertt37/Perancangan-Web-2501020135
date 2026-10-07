#include <iostream>
using namespace std;

// int main() {
//     int i;
//     for (i=1; i<=10; i++){
//         cout << "Belajar C++ Materi Loooping" << endl;
//     }
// }

// int main() {
//     int i = 1;

//     while(i<=10){
//         cout << "Belajar C++ Materi Looping" << endl;
//         i++;
//     }
//     return 0;
// }

// int main() {
//     int i=1;

//     do {
//         cout << "Belajar C++ Materi Looping" << endl;
//         i++;
//     }
//     while(i<=10);
// }

// int main () {
//     for (int i=1; i<=10; i++){
//         if(i==4){break;}//skip i==(nilai yang ditentukan)
//         cout << "Belajar C++ Materi Loooping(Break) Ke- "<<i<< endl;
//     }
// }

// int main () {
//     for (int i=1; i<=10; i++){
//         if (i==4){continue;}//continue itu ngeskip i==(angka yang ditentukan)
//         cout << "Belajar C++ Materi Looping (Continue) Ke-" << i << endl;
//     }
// }

//Latihan
int main () {
    // Nomor1
    // //Pakai For
    for (int i=1; i<=100; i++){
        cout << "Bilangan Ke- " << i << endl;
    }

    //Pakai While
    int i=1;
    while(i<=100){
        cout << "Bilangan Ke- " << i << endl;
        i++;
    }

    Pakai do-While
    int i=1;
    do{
        cout << "Bilangan Ke- " <<i<< endl;
        i++;
    }
    while (i<=100);

    //Nomor 2
    // Deret menggunakan for loop
    // cout << "Deret dengan for loop: (";
    // for (int i = 20; i >= 0; i -= 2) {
    //     cout << i;
    //     if (i > 0) cout << ",";
    // }
    // cout << ")\n";

    // // Deret menggunakan while loop
    // cout << "Deret dengan while loop: (";
    // int j = 20;
    // while (j >= 0) {
    //     cout << j;
    //     if (j > 0) cout << ",";
    //     j -= 2;
    // }
    // cout << ")\n";

    // // Deret menggunakan do-while loop
    // cout << "Deret dengan do-while loop: (";
    // int k = 20;
    // do {
    //     cout << k;
    //     if (k > 0) cout << ",";
    //     k -= 2;
    // } while (k >= 0);
    // cout << ")\n";
    // return 0;

    //Nomor 3
    int pilihan;
    int i = 1;

    cout << "Pilih jenis bilangan yang ingin ditampilkan:\n";
    cout << "1. Bilangan Ganjil\n";
    cout << "2. Bilangan Genap\n";
    cout << "Masukkan pilihan (1 atau 2): ";
    cin >> pilihan;

    cout << "Hasil:\n";

    while (i <= 100) {
        if (pilihan == 1 && i % 2 != 0) {
            cout << i << " ";
        } else if (pilihan == 2 && i % 2 == 0) {
            cout << i << " ";
        }
        i++;
    }

    cout << "\n";
    return 0;

}