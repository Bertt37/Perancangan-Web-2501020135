#include <iostream>
using namespace std;

// Fungsi user-defined untuk menghitung luas persegi panjang
int LuasPersegiPanjang(int p, int l) {
    return p * l;
}

int main() {
    int panjang = 10;
    int lebar = 5;

    int luas = LuasPersegiPanjang(panjang, lebar);
    cout << "Luas persegi panjang adalah: " << luas << endl;

    return 0;
}