// Untuk Array 1 Dimensi

// #include <iostream>
// using namespace std;

// int main () {
//     int bil[10] = {3,6,9,12,15,18,21,24,27,30};
//     bil [4] = 14;// dipakai kalo mau ubah nilai dalam array

//     // cout << bil[4] << endl; // dipakai kalo mau nampilkan satu nilai array 1dimensi

//     // for (int bil2=0; bil2<10; bil2++){ // dipakai kalau mau nampilkan semua array 1dimensi
//     //     cout << bil[bil2] << "\n";}

//     for (int bil2 : bil){
//         cout << bil2 << "\n";} // Versi lebih simple dari for di atas
// }

// Untuk Array 2 Dimensi
#include <iostream>
using namespace std;

int main () {
    int bil[2][5] = {{2, 3, 5, 6, 8} , {9, 11, 12, 14, 15}};
    
    // cout << bil [0][3] << endl;
    
    // for (int x=0; x<2; x++){
    // for (int y=0; y<5; y++){
    //     cout << bil[x] [y] << "\n";}}

    for (auto &baris : bil){
        for (auto &kolom : baris){
            cout << kolom << " ";
        }
        cout << endl;
    }
}