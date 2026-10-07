// #include <iostream>
// using namespace std;

// // Definisi variabel global
// int jumlah;

// //Parameter Formal
// int penjumlahan (int bil1, int bil2){
//     jumlah = bil1 + bil2;
//     return jumlah;
// }

// //Parameter Aktual
// int main() {
//     // Definisi variabel lokal
//     int bil1 , bil2;
    
//     cout << "Masukkan Bilangan 1 :";
//     cin >> bil1;
//     cout << "Masukkan Bilangan 2 :";
//     cin >> bil2;

//     cout << "Hasil Penjumlahan = " << penjumlahan (bil1, bil2) << endl;
//     return 0;
// }


// // Pakai VOID
// #include<iostream>
// using namespace std;

int bil1, bil2;

void kali() {
    int jumlah = bil1 * bil2;

    cout << "A x  B = " << jumlah << endl;
}

main() {
    cout << "A : ";
    cin >> bil1;
    cout << "B : ";
    cin >> bil2;

    kali();
}

//Rekursi
#include <iostream>
using namespace std;

int faktorial (int deret) {
    if (deret == 0) return(1);
    else return deret * faktorial(deret-1);
}

int main() {
    int bil1;

    cout << "Bilangan Faktorial :" ;
    cin >> bil1;
    cout << "!" << bil1 << " = " << faktorial(bil1) << endl;

    return 0;
}